/*******************************************************************************
    OpenAirInterface
    Copyright(c) 1999 - 2016 Eurecom

    OpenAirInterface is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.


    OpenAirInterface is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with OpenAirInterface.The full GNU General Public License is
   included in this distribution in the file called "COPYING". If not,
   see <http://www.gnu.org/licenses/>.

  Contact Information
  OpenAirInterface Admin: openair_admin@eurecom.fr
  OpenAirInterface Tech : openair_tech@eurecom.fr
  OpenAirInterface Dev  : openair4g-devel@lists.eurecom.fr

  Address      : Eurecom, Compus SophiaTech 450, route des chappes, 06451 Biot, France.

 *******************************************************************************/

/*! \file controller_agent_net_comm.c
 * \brief enb agent network interface abstraction 
 * \author Xenofon Foukas
 * \date 2016
 * \version 0.1
 */

#include "controller_agent_net_comm.h"
#include "log.h"

controller_agent_channel_t *agent_channel[NUM_MAX_CONTROLLER][CONTROLLER_AGENT_MAX];
controller_agent_channel_instance_t channel_instance;
int controller_agent_channel_id = 0;

int controller_agent_msg_send(mid_t mod_id, agent_id_t agent_id, void *data, int size, int priority) {
  /*Check if agent id is valid*/
  if (agent_id >= CONTROLLER_AGENT_MAX || agent_id < 0) {
    goto error;
  }
  controller_agent_channel_t *channel;
  channel = agent_channel[mod_id][agent_id];
  
  /*Check if agent has a channel registered*/
  if (channel == NULL) {
    goto error;
  }

  return channel->msg_send(data, size, priority, channel->channel_info);
  
 error:
  // LOG_E(CONTROLLER_AGENT, "No channel registered for agent with id %d\n", agent_id);
  printf("No channel registered for agent with id %d\n", agent_id);
  return -1;
}

int controller_agent_msg_recv(mid_t mod_id, agent_id_t agent_id, void **data, int *size, int *priority) {
  /*Check if agent id is valid*/
  if (agent_id >= CONTROLLER_AGENT_MAX || agent_id < 0) {
    goto error;
  }
  controller_agent_channel_t *channel;
  channel = agent_channel[mod_id][agent_id];
  
  /*Check if agent has a channel registered*/
  if (channel == NULL) {
    goto error;
  }
  
  return channel->msg_recv(data, size, priority, channel->channel_info);
  
 error:
  // LOG_E(CONTROLLER_AGENT, "No channel registered for agent with id %d\n", agent_id);
  printf("No channel registered for agent with id %d\n", agent_id);
  return -1;
}

int controller_agent_register_channel(mid_t mod_id, controller_agent_channel_t *channel, agent_id_t agent_id) {
  int i;

  if (channel == NULL) {
    return -1;
  }

  if (agent_id == CONTROLLER_AGENT_MAX) {
    for (i = 0; i < CONTROLLER_AGENT_MAX; i++) {
      agent_channel[mod_id][i] = channel;
    }
  } else {
    agent_channel[mod_id][agent_id] = channel;
  }
  return 0;
}

void controller_agent_unregister_channel(mid_t mod_id, agent_id_t agent_id) {
  int i;

  if (agent_id == CONTROLLER_AGENT_MAX) {
    for (i = 0; i < CONTROLLER_AGENT_MAX; i++) {
      agent_channel[mod_id][i] = NULL;
    }
  } else {
    agent_channel[mod_id][agent_id] = NULL;
  }
}

int controller_agent_create_channel(void *channel_info,
			       int (*msg_send)(void *data, int size, int priority, void *channel_info),
			       int (*msg_recv)(void **data, int *size, int *priority, void *channel_info),
			     void (*release)(controller_agent_channel_t *channel)) {
  
  int channel_id = ++controller_agent_channel_id;
  controller_agent_channel_t *channel = (controller_agent_channel_t *) malloc(sizeof(controller_agent_channel_t));
  channel->channel_id = channel_id;
  channel->channel_info = channel_info;
  channel->msg_send = msg_send;
  channel->msg_recv = msg_recv;
  channel->release = release;
  
  /*element should be a real pointer*/
  RB_INSERT(controller_agent_channel_map, &channel_instance.controller_agent_head, channel); 
  
  LOG_I(CONTROLLER_AGENT,"Created a new channel with id 0x%lx\n", channel->channel_id);
 
  return channel_id; 
}

int controller_agent_destroy_channel(int channel_id) {
  int i, j;

  /*Check to see if channel exists*/
  struct controller_agent_channel_s *e = NULL;
  struct controller_agent_channel_s search;
  memset(&search, 0, sizeof(struct controller_agent_channel_s));

  e = RB_FIND(controller_agent_channel_map, &channel_instance.controller_agent_head, &search);

  if (e == NULL) {
    return -1;
  }

  /*Unregister the channel from all agents*/
  for (i = 0; i < NUM_MAX_CONTROLLER; i++) {
    for (j = 0; j < CONTROLLER_AGENT_MAX; j++) {
      if (agent_channel[i][j] != NULL) {
	if (agent_channel[i][j]->channel_id == e->channel_id) {
	  agent_channel[i][j] == NULL;
	}
      }
    }
  }

  /*Remove the channel from the tree and free memory*/
  RB_REMOVE(controller_agent_channel_map, &channel_instance.controller_agent_head, e);
  e->release(e);
  free(e);

  return 0;
}

err_code_t controller_agent_init_channel_container(void) {
  int i, j;
  LOG_I(CONTROLLER_AGENT, "init RB tree for channel container\n");

  RB_INIT(&channel_instance.controller_agent_head);
  
  for (i = 0; i < NUM_MAX_CONTROLLER; i++) {
    for (j = 0; j < CONTROLLER_AGENT_MAX; j++) {
      agent_channel[i][j] == NULL;
    }
  }

  return 0;
}

RB_GENERATE(controller_agent_channel_map,controller_agent_channel_s, entry, controller_agent_compare_channel);

int controller_agent_compare_channel(struct controller_agent_channel_s *a, struct controller_agent_channel_s *b) {
  if (a->channel_id < b->channel_id) return -1;
  if (a->channel_id > b->channel_id) return 1;

  // equal timers
  return 0;
}

controller_agent_channel_t * get_channel(int channel_id) {
  
  struct controller_agent_channel_s search;
  memset(&search, 0, sizeof(struct controller_agent_channel_s));
  search.channel_id = channel_id;
  
  return  RB_FIND(controller_agent_channel_map, &channel_instance.controller_agent_head, &search);
  
}
