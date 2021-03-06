/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: controller_commands.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "controller_commands.pb-c.h"
void   protocol__prp_dl_data__init
                     (Protocol__PrpDlData         *message)
{
  static Protocol__PrpDlData init_value = PROTOCOL__PRP_DL_DATA__INIT;
  *message = init_value;
}
size_t protocol__prp_dl_data__get_packed_size
                     (const Protocol__PrpDlData *message)
{
  assert(message->base.descriptor == &protocol__prp_dl_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_dl_data__pack
                     (const Protocol__PrpDlData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_dl_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_dl_data__pack_to_buffer
                     (const Protocol__PrpDlData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_dl_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpDlData *
       protocol__prp_dl_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpDlData *)
     protobuf_c_message_unpack (&protocol__prp_dl_data__descriptor,
                                allocator, len, data);
}
void   protocol__prp_dl_data__free_unpacked
                     (Protocol__PrpDlData *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_dl_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_dl_rar__init
                     (Protocol__PrpDlRar         *message)
{
  static Protocol__PrpDlRar init_value = PROTOCOL__PRP_DL_RAR__INIT;
  *message = init_value;
}
size_t protocol__prp_dl_rar__get_packed_size
                     (const Protocol__PrpDlRar *message)
{
  assert(message->base.descriptor == &protocol__prp_dl_rar__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_dl_rar__pack
                     (const Protocol__PrpDlRar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_dl_rar__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_dl_rar__pack_to_buffer
                     (const Protocol__PrpDlRar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_dl_rar__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpDlRar *
       protocol__prp_dl_rar__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpDlRar *)
     protobuf_c_message_unpack (&protocol__prp_dl_rar__descriptor,
                                allocator, len, data);
}
void   protocol__prp_dl_rar__free_unpacked
                     (Protocol__PrpDlRar *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_dl_rar__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_dl_broadcast__init
                     (Protocol__PrpDlBroadcast         *message)
{
  static Protocol__PrpDlBroadcast init_value = PROTOCOL__PRP_DL_BROADCAST__INIT;
  *message = init_value;
}
size_t protocol__prp_dl_broadcast__get_packed_size
                     (const Protocol__PrpDlBroadcast *message)
{
  assert(message->base.descriptor == &protocol__prp_dl_broadcast__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_dl_broadcast__pack
                     (const Protocol__PrpDlBroadcast *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_dl_broadcast__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_dl_broadcast__pack_to_buffer
                     (const Protocol__PrpDlBroadcast *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_dl_broadcast__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpDlBroadcast *
       protocol__prp_dl_broadcast__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpDlBroadcast *)
     protobuf_c_message_unpack (&protocol__prp_dl_broadcast__descriptor,
                                allocator, len, data);
}
void   protocol__prp_dl_broadcast__free_unpacked
                     (Protocol__PrpDlBroadcast *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_dl_broadcast__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_pdcch_ofdm_sym_count__init
                     (Protocol__PrpPdcchOfdmSymCount         *message)
{
  static Protocol__PrpPdcchOfdmSymCount init_value = PROTOCOL__PRP_PDCCH_OFDM_SYM_COUNT__INIT;
  *message = init_value;
}
size_t protocol__prp_pdcch_ofdm_sym_count__get_packed_size
                     (const Protocol__PrpPdcchOfdmSymCount *message)
{
  assert(message->base.descriptor == &protocol__prp_pdcch_ofdm_sym_count__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_pdcch_ofdm_sym_count__pack
                     (const Protocol__PrpPdcchOfdmSymCount *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_pdcch_ofdm_sym_count__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_pdcch_ofdm_sym_count__pack_to_buffer
                     (const Protocol__PrpPdcchOfdmSymCount *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_pdcch_ofdm_sym_count__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpPdcchOfdmSymCount *
       protocol__prp_pdcch_ofdm_sym_count__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpPdcchOfdmSymCount *)
     protobuf_c_message_unpack (&protocol__prp_pdcch_ofdm_sym_count__descriptor,
                                allocator, len, data);
}
void   protocol__prp_pdcch_ofdm_sym_count__free_unpacked
                     (Protocol__PrpPdcchOfdmSymCount *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_pdcch_ofdm_sym_count__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor protocol__prp_dl_data__field_descriptors[6] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlData, has_rnti),
    offsetof(Protocol__PrpDlData, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dl_dci",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpDlData, dl_dci),
    &protocol__prp_dl_dci__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ce_bitmap",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlData, n_ce_bitmap),
    offsetof(Protocol__PrpDlData, ce_bitmap),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlc_pdu",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__PrpDlData, n_rlc_pdu),
    offsetof(Protocol__PrpDlData, rlc_pdu),
    &protocol__prp_rlc_pdu__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "serv_cell_index",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlData, has_serv_cell_index),
    offsetof(Protocol__PrpDlData, serv_cell_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "act_deact_ce",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlData, has_act_deact_ce),
    offsetof(Protocol__PrpDlData, act_deact_ce),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_dl_data__field_indices_by_name[] = {
  5,   /* field[5] = act_deact_ce */
  2,   /* field[2] = ce_bitmap */
  1,   /* field[1] = dl_dci */
  3,   /* field[3] = rlc_pdu */
  0,   /* field[0] = rnti */
  4,   /* field[4] = serv_cell_index */
};
static const ProtobufCIntRange protocol__prp_dl_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor protocol__prp_dl_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_dl_data",
  "PrpDlData",
  "Protocol__PrpDlData",
  "protocol",
  sizeof(Protocol__PrpDlData),
  6,
  protocol__prp_dl_data__field_descriptors,
  protocol__prp_dl_data__field_indices_by_name,
  1,  protocol__prp_dl_data__number_ranges,
  (ProtobufCMessageInit) protocol__prp_dl_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_dl_rar__field_descriptors[4] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlRar, has_rnti),
    offsetof(Protocol__PrpDlRar, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "grant",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlRar, has_grant),
    offsetof(Protocol__PrpDlRar, grant),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rar_dci",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpDlRar, rar_dci),
    &protocol__prp_dl_dci__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "carrier_index",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlRar, has_carrier_index),
    offsetof(Protocol__PrpDlRar, carrier_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_dl_rar__field_indices_by_name[] = {
  3,   /* field[3] = carrier_index */
  1,   /* field[1] = grant */
  2,   /* field[2] = rar_dci */
  0,   /* field[0] = rnti */
};
static const ProtobufCIntRange protocol__prp_dl_rar__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor protocol__prp_dl_rar__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_dl_rar",
  "PrpDlRar",
  "Protocol__PrpDlRar",
  "protocol",
  sizeof(Protocol__PrpDlRar),
  4,
  protocol__prp_dl_rar__field_descriptors,
  protocol__prp_dl_rar__field_indices_by_name,
  1,  protocol__prp_dl_rar__number_ranges,
  (ProtobufCMessageInit) protocol__prp_dl_rar__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_dl_broadcast__field_descriptors[4] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlBroadcast, has_type),
    offsetof(Protocol__PrpDlBroadcast, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "index",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlBroadcast, has_index),
    offsetof(Protocol__PrpDlBroadcast, index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "broad_dci",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpDlBroadcast, broad_dci),
    &protocol__prp_dl_dci__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "carrier_index",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlBroadcast, has_carrier_index),
    offsetof(Protocol__PrpDlBroadcast, carrier_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_dl_broadcast__field_indices_by_name[] = {
  2,   /* field[2] = broad_dci */
  3,   /* field[3] = carrier_index */
  1,   /* field[1] = index */
  0,   /* field[0] = type */
};
static const ProtobufCIntRange protocol__prp_dl_broadcast__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor protocol__prp_dl_broadcast__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_dl_broadcast",
  "PrpDlBroadcast",
  "Protocol__PrpDlBroadcast",
  "protocol",
  sizeof(Protocol__PrpDlBroadcast),
  4,
  protocol__prp_dl_broadcast__field_descriptors,
  protocol__prp_dl_broadcast__field_indices_by_name,
  1,  protocol__prp_dl_broadcast__number_ranges,
  (ProtobufCMessageInit) protocol__prp_dl_broadcast__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_pdcch_ofdm_sym_count__field_descriptors[2] =
{
  {
    "carrier_index",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpPdcchOfdmSymCount, has_carrier_index),
    offsetof(Protocol__PrpPdcchOfdmSymCount, carrier_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_pdcch_ofdm_symbols",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpPdcchOfdmSymCount, has_num_pdcch_ofdm_symbols),
    offsetof(Protocol__PrpPdcchOfdmSymCount, num_pdcch_ofdm_symbols),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_pdcch_ofdm_sym_count__field_indices_by_name[] = {
  0,   /* field[0] = carrier_index */
  1,   /* field[1] = num_pdcch_ofdm_symbols */
};
static const ProtobufCIntRange protocol__prp_pdcch_ofdm_sym_count__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protocol__prp_pdcch_ofdm_sym_count__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_pdcch_ofdm_sym_count",
  "PrpPdcchOfdmSymCount",
  "Protocol__PrpPdcchOfdmSymCount",
  "protocol",
  sizeof(Protocol__PrpPdcchOfdmSymCount),
  2,
  protocol__prp_pdcch_ofdm_sym_count__field_descriptors,
  protocol__prp_pdcch_ofdm_sym_count__field_indices_by_name,
  1,  protocol__prp_pdcch_ofdm_sym_count__number_ranges,
  (ProtobufCMessageInit) protocol__prp_pdcch_ofdm_sym_count__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue protocol__prp_broadcast_type__enum_values_by_number[2] =
{
  { "PRBT_BCCH", "PROTOCOL__PRP_BROADCAST_TYPE__PRBT_BCCH", 0 },
  { "PRBT_PCCH", "PROTOCOL__PRP_BROADCAST_TYPE__PRBT_PCCH", 1 },
};
static const ProtobufCIntRange protocol__prp_broadcast_type__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex protocol__prp_broadcast_type__enum_values_by_name[2] =
{
  { "PRBT_BCCH", 0 },
  { "PRBT_PCCH", 1 },
};
const ProtobufCEnumDescriptor protocol__prp_broadcast_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.prp_broadcast_type",
  "prp_broadcast_type",
  "Protocol__PrpBroadcastType",
  "protocol",
  2,
  protocol__prp_broadcast_type__enum_values_by_number,
  2,
  protocol__prp_broadcast_type__enum_values_by_name,
  1,
  protocol__prp_broadcast_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
