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

/*! \file controller_agent_net_comm.h
 * \brief enb agent network interface abstraction 
 * \autho Xenofon Foukas
 * \date 2016
 * \version 0.1
 */
#ifndef CONTROLLER_AGENT_NET_COMM_H_
#define CONTROLLER_AGENT_NET_COMM_H_

#include "controller_agent_defs.h"

#include "tree.h"

/*Channel related information used for Tx/Rx of protocol messages*/
typedef struct controller_agent_channel_s {
  RB_ENTRY(controller_agent_channel_s) entry;
int channel_id;
void *channel_info;
/*Callbacks for channel message Tx and Rx*/
int (*msg_send)(void *data, int size, int priority, void *channel_info);
int (*msg_recv)(void **data, int *size, int *priority, void *channel_info);
void (*release)(struct controller_agent_channel_s *channel);
} controller_agent_channel_t;

typedef struct controller_agent_channel_instance_s{
  RB_HEAD(controller_agent_channel_map, controller_agent_channel_s) controller_agent_head;
} controller_agent_channel_instance_t;

/*Send and receive messages using the channel registered for a specific agent*/
int controller_agent_msg_send(mid_t mod_id, agent_id_t agent_id, void *data, int size, int priority);

int controller_agent_msg_recv(mid_t mod_id, agent_id_t agent_id, void **data, int *size, int *priority);

/*Register a channel to an agent. Use CONTROLLER_AGENT_MAX to register the
 *same channel to all agents*/
int controller_agent_register_channel(mid_t mod_id, controller_agent_channel_t *channel, agent_id_t agent_id);

/*Unregister the current channel of an agent. Use CONTROLLER_AGENT_MAX to unregister all channels*/
void controller_agent_unregister_channel(mid_t mod_id, agent_id_t agent_id);

/*Create a new channel. Returns the id of the new channel or negative number otherwise*/
int controller_agent_create_channel(void *channel_info,
			       int (*msg_send)(void *data, int size, int priority, void *channel_info),
			       int (*msg_recv)(void **data, int *size, int *priority, void *channel_info),
			     void (*release)(controller_agent_channel_t *channel));

/*Unregister a channel from all agents and destroy it. Returns 0 in case of success*/
int controller_agent_destroy_channel(int channel_id);

/*Return an agent communication channel based on its id*/
controller_agent_channel_t * get_channel(int channel_id);

/*Should be called before performing any channel operations*/
err_code_t controller_agent_init_channel_container(void);

int controller_agent_compare_channel(struct controller_agent_channel_s *a, struct controller_agent_channel_s *b);

/* RB_PROTOTYPE is for .h files */
RB_PROTOTYPE(controller_agent_channel_map, controller_agent_channel_s, entry, controller_agent_compare_channel);

#endif /*CONTROLLER_AGENT_COMM_H_*/
