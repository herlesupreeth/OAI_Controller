/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: stats_messages.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "stats_messages.pb-c.h"
void   protocol__prp_complete_stats_request__init
                     (Protocol__PrpCompleteStatsRequest         *message)
{
  static Protocol__PrpCompleteStatsRequest init_value = PROTOCOL__PRP_COMPLETE_STATS_REQUEST__INIT;
  *message = init_value;
}
size_t protocol__prp_complete_stats_request__get_packed_size
                     (const Protocol__PrpCompleteStatsRequest *message)
{
  assert(message->base.descriptor == &protocol__prp_complete_stats_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_complete_stats_request__pack
                     (const Protocol__PrpCompleteStatsRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_complete_stats_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_complete_stats_request__pack_to_buffer
                     (const Protocol__PrpCompleteStatsRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_complete_stats_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpCompleteStatsRequest *
       protocol__prp_complete_stats_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpCompleteStatsRequest *)
     protobuf_c_message_unpack (&protocol__prp_complete_stats_request__descriptor,
                                allocator, len, data);
}
void   protocol__prp_complete_stats_request__free_unpacked
                     (Protocol__PrpCompleteStatsRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_complete_stats_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_cell_stats_request__init
                     (Protocol__PrpCellStatsRequest         *message)
{
  static Protocol__PrpCellStatsRequest init_value = PROTOCOL__PRP_CELL_STATS_REQUEST__INIT;
  *message = init_value;
}
size_t protocol__prp_cell_stats_request__get_packed_size
                     (const Protocol__PrpCellStatsRequest *message)
{
  assert(message->base.descriptor == &protocol__prp_cell_stats_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_cell_stats_request__pack
                     (const Protocol__PrpCellStatsRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_cell_stats_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_cell_stats_request__pack_to_buffer
                     (const Protocol__PrpCellStatsRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_cell_stats_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpCellStatsRequest *
       protocol__prp_cell_stats_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpCellStatsRequest *)
     protobuf_c_message_unpack (&protocol__prp_cell_stats_request__descriptor,
                                allocator, len, data);
}
void   protocol__prp_cell_stats_request__free_unpacked
                     (Protocol__PrpCellStatsRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_cell_stats_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_ue_stats_request__init
                     (Protocol__PrpUeStatsRequest         *message)
{
  static Protocol__PrpUeStatsRequest init_value = PROTOCOL__PRP_UE_STATS_REQUEST__INIT;
  *message = init_value;
}
size_t protocol__prp_ue_stats_request__get_packed_size
                     (const Protocol__PrpUeStatsRequest *message)
{
  assert(message->base.descriptor == &protocol__prp_ue_stats_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_ue_stats_request__pack
                     (const Protocol__PrpUeStatsRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_ue_stats_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_ue_stats_request__pack_to_buffer
                     (const Protocol__PrpUeStatsRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_ue_stats_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpUeStatsRequest *
       protocol__prp_ue_stats_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpUeStatsRequest *)
     protobuf_c_message_unpack (&protocol__prp_ue_stats_request__descriptor,
                                allocator, len, data);
}
void   protocol__prp_ue_stats_request__free_unpacked
                     (Protocol__PrpUeStatsRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_ue_stats_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_cell_stats_report__init
                     (Protocol__PrpCellStatsReport         *message)
{
  static Protocol__PrpCellStatsReport init_value = PROTOCOL__PRP_CELL_STATS_REPORT__INIT;
  *message = init_value;
}
size_t protocol__prp_cell_stats_report__get_packed_size
                     (const Protocol__PrpCellStatsReport *message)
{
  assert(message->base.descriptor == &protocol__prp_cell_stats_report__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_cell_stats_report__pack
                     (const Protocol__PrpCellStatsReport *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_cell_stats_report__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_cell_stats_report__pack_to_buffer
                     (const Protocol__PrpCellStatsReport *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_cell_stats_report__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpCellStatsReport *
       protocol__prp_cell_stats_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpCellStatsReport *)
     protobuf_c_message_unpack (&protocol__prp_cell_stats_report__descriptor,
                                allocator, len, data);
}
void   protocol__prp_cell_stats_report__free_unpacked
                     (Protocol__PrpCellStatsReport *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_cell_stats_report__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_ue_stats_report__init
                     (Protocol__PrpUeStatsReport         *message)
{
  static Protocol__PrpUeStatsReport init_value = PROTOCOL__PRP_UE_STATS_REPORT__INIT;
  *message = init_value;
}
size_t protocol__prp_ue_stats_report__get_packed_size
                     (const Protocol__PrpUeStatsReport *message)
{
  assert(message->base.descriptor == &protocol__prp_ue_stats_report__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_ue_stats_report__pack
                     (const Protocol__PrpUeStatsReport *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_ue_stats_report__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_ue_stats_report__pack_to_buffer
                     (const Protocol__PrpUeStatsReport *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_ue_stats_report__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpUeStatsReport *
       protocol__prp_ue_stats_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpUeStatsReport *)
     protobuf_c_message_unpack (&protocol__prp_ue_stats_report__descriptor,
                                allocator, len, data);
}
void   protocol__prp_ue_stats_report__free_unpacked
                     (Protocol__PrpUeStatsReport *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_ue_stats_report__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor protocol__prp_complete_stats_request__field_descriptors[4] =
{
  {
    "report_frequency",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Protocol__PrpCompleteStatsRequest, has_report_frequency),
    offsetof(Protocol__PrpCompleteStatsRequest, report_frequency),
    &protocol__prp_stats_report_freq__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sf",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCompleteStatsRequest, has_sf),
    offsetof(Protocol__PrpCompleteStatsRequest, sf),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cell_report_flags",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCompleteStatsRequest, has_cell_report_flags),
    offsetof(Protocol__PrpCompleteStatsRequest, cell_report_flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ue_report_flags",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCompleteStatsRequest, has_ue_report_flags),
    offsetof(Protocol__PrpCompleteStatsRequest, ue_report_flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_complete_stats_request__field_indices_by_name[] = {
  2,   /* field[2] = cell_report_flags */
  0,   /* field[0] = report_frequency */
  1,   /* field[1] = sf */
  3,   /* field[3] = ue_report_flags */
};
static const ProtobufCIntRange protocol__prp_complete_stats_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor protocol__prp_complete_stats_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_complete_stats_request",
  "PrpCompleteStatsRequest",
  "Protocol__PrpCompleteStatsRequest",
  "protocol",
  sizeof(Protocol__PrpCompleteStatsRequest),
  4,
  protocol__prp_complete_stats_request__field_descriptors,
  protocol__prp_complete_stats_request__field_indices_by_name,
  1,  protocol__prp_complete_stats_request__number_ranges,
  (ProtobufCMessageInit) protocol__prp_complete_stats_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_cell_stats_request__field_descriptors[2] =
{
  {
    "cell",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellStatsRequest, n_cell),
    offsetof(Protocol__PrpCellStatsRequest, cell),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellStatsRequest, has_flags),
    offsetof(Protocol__PrpCellStatsRequest, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_cell_stats_request__field_indices_by_name[] = {
  0,   /* field[0] = cell */
  1,   /* field[1] = flags */
};
static const ProtobufCIntRange protocol__prp_cell_stats_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protocol__prp_cell_stats_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_cell_stats_request",
  "PrpCellStatsRequest",
  "Protocol__PrpCellStatsRequest",
  "protocol",
  sizeof(Protocol__PrpCellStatsRequest),
  2,
  protocol__prp_cell_stats_request__field_descriptors,
  protocol__prp_cell_stats_request__field_indices_by_name,
  1,  protocol__prp_cell_stats_request__number_ranges,
  (ProtobufCMessageInit) protocol__prp_cell_stats_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_ue_stats_request__field_descriptors[2] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeStatsRequest, n_rnti),
    offsetof(Protocol__PrpUeStatsRequest, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeStatsRequest, has_flags),
    offsetof(Protocol__PrpUeStatsRequest, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_ue_stats_request__field_indices_by_name[] = {
  1,   /* field[1] = flags */
  0,   /* field[0] = rnti */
};
static const ProtobufCIntRange protocol__prp_ue_stats_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protocol__prp_ue_stats_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_ue_stats_request",
  "PrpUeStatsRequest",
  "Protocol__PrpUeStatsRequest",
  "protocol",
  sizeof(Protocol__PrpUeStatsRequest),
  2,
  protocol__prp_ue_stats_request__field_descriptors,
  protocol__prp_ue_stats_request__field_indices_by_name,
  1,  protocol__prp_ue_stats_request__number_ranges,
  (ProtobufCMessageInit) protocol__prp_ue_stats_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_cell_stats_report__field_descriptors[3] =
{
  {
    "carrier_index",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellStatsReport, has_carrier_index),
    offsetof(Protocol__PrpCellStatsReport, carrier_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellStatsReport, has_flags),
    offsetof(Protocol__PrpCellStatsReport, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "noise_inter_report",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpCellStatsReport, noise_inter_report),
    &protocol__prp_noise_interference_report__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_cell_stats_report__field_indices_by_name[] = {
  0,   /* field[0] = carrier_index */
  1,   /* field[1] = flags */
  2,   /* field[2] = noise_inter_report */
};
static const ProtobufCIntRange protocol__prp_cell_stats_report__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor protocol__prp_cell_stats_report__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_cell_stats_report",
  "PrpCellStatsReport",
  "Protocol__PrpCellStatsReport",
  "protocol",
  sizeof(Protocol__PrpCellStatsReport),
  3,
  protocol__prp_cell_stats_report__field_descriptors,
  protocol__prp_cell_stats_report__field_indices_by_name,
  1,  protocol__prp_cell_stats_report__number_ranges,
  (ProtobufCMessageInit) protocol__prp_cell_stats_report__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_ue_stats_report__field_descriptors[9] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeStatsReport, has_rnti),
    offsetof(Protocol__PrpUeStatsReport, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeStatsReport, has_flags),
    offsetof(Protocol__PrpUeStatsReport, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bsr",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeStatsReport, n_bsr),
    offsetof(Protocol__PrpUeStatsReport, bsr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "phr",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeStatsReport, has_phr),
    offsetof(Protocol__PrpUeStatsReport, phr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlc_report",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__PrpUeStatsReport, n_rlc_report),
    offsetof(Protocol__PrpUeStatsReport, rlc_report),
    &protocol__prp_rlc_bsr__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pending_mac_ces",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeStatsReport, has_pending_mac_ces),
    offsetof(Protocol__PrpUeStatsReport, pending_mac_ces),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dl_cqi_report",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpUeStatsReport, dl_cqi_report),
    &protocol__prp_dl_cqi_report__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pbr",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpUeStatsReport, pbr),
    &protocol__prp_paging_buffer_report__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ul_cqi_report",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpUeStatsReport, ul_cqi_report),
    &protocol__prp_ul_cqi_report__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_ue_stats_report__field_indices_by_name[] = {
  2,   /* field[2] = bsr */
  6,   /* field[6] = dl_cqi_report */
  1,   /* field[1] = flags */
  7,   /* field[7] = pbr */
  5,   /* field[5] = pending_mac_ces */
  3,   /* field[3] = phr */
  4,   /* field[4] = rlc_report */
  0,   /* field[0] = rnti */
  8,   /* field[8] = ul_cqi_report */
};
static const ProtobufCIntRange protocol__prp_ue_stats_report__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor protocol__prp_ue_stats_report__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_ue_stats_report",
  "PrpUeStatsReport",
  "Protocol__PrpUeStatsReport",
  "protocol",
  sizeof(Protocol__PrpUeStatsReport),
  9,
  protocol__prp_ue_stats_report__field_descriptors,
  protocol__prp_ue_stats_report__field_indices_by_name,
  1,  protocol__prp_ue_stats_report__number_ranges,
  (ProtobufCMessageInit) protocol__prp_ue_stats_report__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue protocol__prp_stats_type__enum_values_by_number[3] =
{
  { "PRST_COMPLETE_STATS", "PROTOCOL__PRP_STATS_TYPE__PRST_COMPLETE_STATS", 0 },
  { "PRST_CELL_STATS", "PROTOCOL__PRP_STATS_TYPE__PRST_CELL_STATS", 1 },
  { "PRST_UE_STATS", "PROTOCOL__PRP_STATS_TYPE__PRST_UE_STATS", 2 },
};
static const ProtobufCIntRange protocol__prp_stats_type__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex protocol__prp_stats_type__enum_values_by_name[3] =
{
  { "PRST_CELL_STATS", 1 },
  { "PRST_COMPLETE_STATS", 0 },
  { "PRST_UE_STATS", 2 },
};
const ProtobufCEnumDescriptor protocol__prp_stats_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.prp_stats_type",
  "prp_stats_type",
  "Protocol__PrpStatsType",
  "protocol",
  3,
  protocol__prp_stats_type__enum_values_by_number,
  3,
  protocol__prp_stats_type__enum_values_by_name,
  1,
  protocol__prp_stats_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__prp_stats_report_freq__enum_values_by_number[4] =
{
  { "PRSRF_ONCE", "PROTOCOL__PRP_STATS_REPORT_FREQ__PRSRF_ONCE", 0 },
  { "PRSRF_PERIODICAL", "PROTOCOL__PRP_STATS_REPORT_FREQ__PRSRF_PERIODICAL", 1 },
  { "PRSRF_CONTINUOUS", "PROTOCOL__PRP_STATS_REPORT_FREQ__PRSRF_CONTINUOUS", 2 },
  { "PRSRF_OFF", "PROTOCOL__PRP_STATS_REPORT_FREQ__PRSRF_OFF", 3 },
};
static const ProtobufCIntRange protocol__prp_stats_report_freq__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex protocol__prp_stats_report_freq__enum_values_by_name[4] =
{
  { "PRSRF_CONTINUOUS", 2 },
  { "PRSRF_OFF", 3 },
  { "PRSRF_ONCE", 0 },
  { "PRSRF_PERIODICAL", 1 },
};
const ProtobufCEnumDescriptor protocol__prp_stats_report_freq__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.prp_stats_report_freq",
  "prp_stats_report_freq",
  "Protocol__PrpStatsReportFreq",
  "protocol",
  4,
  protocol__prp_stats_report_freq__enum_values_by_number,
  4,
  protocol__prp_stats_report_freq__enum_values_by_name,
  1,
  protocol__prp_stats_report_freq__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__prp_cell_stats_type__enum_values_by_number[1] =
{
  { "PRCST_NOISE_INTERFERENCE", "PROTOCOL__PRP_CELL_STATS_TYPE__PRCST_NOISE_INTERFERENCE", 1 },
};
static const ProtobufCIntRange protocol__prp_cell_stats_type__value_ranges[] = {
{1, 0},{0, 1}
};
static const ProtobufCEnumValueIndex protocol__prp_cell_stats_type__enum_values_by_name[1] =
{
  { "PRCST_NOISE_INTERFERENCE", 0 },
};
const ProtobufCEnumDescriptor protocol__prp_cell_stats_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.prp_cell_stats_type",
  "prp_cell_stats_type",
  "Protocol__PrpCellStatsType",
  "protocol",
  1,
  protocol__prp_cell_stats_type__enum_values_by_number,
  1,
  protocol__prp_cell_stats_type__enum_values_by_name,
  1,
  protocol__prp_cell_stats_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__prp_ue_stats_type__enum_values_by_number[7] =
{
  { "PRUST_BSR", "PROTOCOL__PRP_UE_STATS_TYPE__PRUST_BSR", 1 },
  { "PRUST_PRH", "PROTOCOL__PRP_UE_STATS_TYPE__PRUST_PRH", 2 },
  { "PRUST_RLC_BS", "PROTOCOL__PRP_UE_STATS_TYPE__PRUST_RLC_BS", 4 },
  { "PRUST_MAC_CE_BS", "PROTOCOL__PRP_UE_STATS_TYPE__PRUST_MAC_CE_BS", 8 },
  { "PRUST_DL_CQI", "PROTOCOL__PRP_UE_STATS_TYPE__PRUST_DL_CQI", 16 },
  { "PRUST_PBS", "PROTOCOL__PRP_UE_STATS_TYPE__PRUST_PBS", 32 },
  { "PRUST_UL_CQI", "PROTOCOL__PRP_UE_STATS_TYPE__PRUST_UL_CQI", 64 },
};
static const ProtobufCIntRange protocol__prp_ue_stats_type__value_ranges[] = {
{1, 0},{4, 2},{8, 3},{16, 4},{32, 5},{64, 6},{0, 7}
};
static const ProtobufCEnumValueIndex protocol__prp_ue_stats_type__enum_values_by_name[7] =
{
  { "PRUST_BSR", 0 },
  { "PRUST_DL_CQI", 4 },
  { "PRUST_MAC_CE_BS", 3 },
  { "PRUST_PBS", 5 },
  { "PRUST_PRH", 1 },
  { "PRUST_RLC_BS", 2 },
  { "PRUST_UL_CQI", 6 },
};
const ProtobufCEnumDescriptor protocol__prp_ue_stats_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.prp_ue_stats_type",
  "prp_ue_stats_type",
  "Protocol__PrpUeStatsType",
  "protocol",
  7,
  protocol__prp_ue_stats_type__enum_values_by_number,
  7,
  protocol__prp_ue_stats_type__enum_values_by_name,
  6,
  protocol__prp_ue_stats_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};