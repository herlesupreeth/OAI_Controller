/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: time_common.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "time_common.pb-c.h"
void   protocol__prp_dl_info__init
                     (Protocol__PrpDlInfo         *message)
{
  static Protocol__PrpDlInfo init_value = PROTOCOL__PRP_DL_INFO__INIT;
  *message = init_value;
}
size_t protocol__prp_dl_info__get_packed_size
                     (const Protocol__PrpDlInfo *message)
{
  assert(message->base.descriptor == &protocol__prp_dl_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_dl_info__pack
                     (const Protocol__PrpDlInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_dl_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_dl_info__pack_to_buffer
                     (const Protocol__PrpDlInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_dl_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpDlInfo *
       protocol__prp_dl_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpDlInfo *)
     protobuf_c_message_unpack (&protocol__prp_dl_info__descriptor,
                                allocator, len, data);
}
void   protocol__prp_dl_info__free_unpacked
                     (Protocol__PrpDlInfo *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_dl_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_ul_info__init
                     (Protocol__PrpUlInfo         *message)
{
  static Protocol__PrpUlInfo init_value = PROTOCOL__PRP_UL_INFO__INIT;
  *message = init_value;
}
size_t protocol__prp_ul_info__get_packed_size
                     (const Protocol__PrpUlInfo *message)
{
  assert(message->base.descriptor == &protocol__prp_ul_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_ul_info__pack
                     (const Protocol__PrpUlInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_ul_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_ul_info__pack_to_buffer
                     (const Protocol__PrpUlInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_ul_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpUlInfo *
       protocol__prp_ul_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpUlInfo *)
     protobuf_c_message_unpack (&protocol__prp_ul_info__descriptor,
                                allocator, len, data);
}
void   protocol__prp_ul_info__free_unpacked
                     (Protocol__PrpUlInfo *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_ul_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor protocol__prp_dl_info__field_descriptors[4] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlInfo, has_rnti),
    offsetof(Protocol__PrpDlInfo, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "harq_process_id",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlInfo, has_harq_process_id),
    offsetof(Protocol__PrpDlInfo, harq_process_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "harq_status",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlInfo, n_harq_status),
    offsetof(Protocol__PrpDlInfo, harq_status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "serv_cell_index",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpDlInfo, has_serv_cell_index),
    offsetof(Protocol__PrpDlInfo, serv_cell_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_dl_info__field_indices_by_name[] = {
  1,   /* field[1] = harq_process_id */
  2,   /* field[2] = harq_status */
  0,   /* field[0] = rnti */
  3,   /* field[3] = serv_cell_index */
};
static const ProtobufCIntRange protocol__prp_dl_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor protocol__prp_dl_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_dl_info",
  "PrpDlInfo",
  "Protocol__PrpDlInfo",
  "protocol",
  sizeof(Protocol__PrpDlInfo),
  4,
  protocol__prp_dl_info__field_descriptors,
  protocol__prp_dl_info__field_indices_by_name,
  1,  protocol__prp_dl_info__number_ranges,
  (ProtobufCMessageInit) protocol__prp_dl_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_ul_info__field_descriptors[5] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUlInfo, has_rnti),
    offsetof(Protocol__PrpUlInfo, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ul_reception",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUlInfo, n_ul_reception),
    offsetof(Protocol__PrpUlInfo, ul_reception),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "reception_status",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUlInfo, has_reception_status),
    offsetof(Protocol__PrpUlInfo, reception_status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tpc",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUlInfo, has_tpc),
    offsetof(Protocol__PrpUlInfo, tpc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "serv_cell_index",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUlInfo, has_serv_cell_index),
    offsetof(Protocol__PrpUlInfo, serv_cell_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_ul_info__field_indices_by_name[] = {
  2,   /* field[2] = reception_status */
  0,   /* field[0] = rnti */
  4,   /* field[4] = serv_cell_index */
  3,   /* field[3] = tpc */
  1,   /* field[1] = ul_reception */
};
static const ProtobufCIntRange protocol__prp_ul_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor protocol__prp_ul_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_ul_info",
  "PrpUlInfo",
  "Protocol__PrpUlInfo",
  "protocol",
  sizeof(Protocol__PrpUlInfo),
  5,
  protocol__prp_ul_info__field_descriptors,
  protocol__prp_ul_info__field_indices_by_name,
  1,  protocol__prp_ul_info__number_ranges,
  (ProtobufCMessageInit) protocol__prp_ul_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue protocol__prp_harq_status__enum_values_by_number[3] =
{
  { "PRHS_ACK", "PROTOCOL__PRP_HARQ_STATUS__PRHS_ACK", 0 },
  { "PRHS_NACK", "PROTOCOL__PRP_HARQ_STATUS__PRHS_NACK", 1 },
  { "PRHS_DTX", "PROTOCOL__PRP_HARQ_STATUS__PRHS_DTX", 2 },
};
static const ProtobufCIntRange protocol__prp_harq_status__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex protocol__prp_harq_status__enum_values_by_name[3] =
{
  { "PRHS_ACK", 0 },
  { "PRHS_DTX", 2 },
  { "PRHS_NACK", 1 },
};
const ProtobufCEnumDescriptor protocol__prp_harq_status__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.prp_harq_status",
  "prp_harq_status",
  "Protocol__PrpHarqStatus",
  "protocol",
  3,
  protocol__prp_harq_status__enum_values_by_number,
  3,
  protocol__prp_harq_status__enum_values_by_name,
  1,
  protocol__prp_harq_status__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue protocol__prp_reception_status__enum_values_by_number[3] =
{
  { "PRRS_OK", "PROTOCOL__PRP_RECEPTION_STATUS__PRRS_OK", 0 },
  { "PRRS_NOT_OK", "PROTOCOL__PRP_RECEPTION_STATUS__PRRS_NOT_OK", 1 },
  { "PRRS_NOT_VALID", "PROTOCOL__PRP_RECEPTION_STATUS__PRRS_NOT_VALID", 2 },
};
static const ProtobufCIntRange protocol__prp_reception_status__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex protocol__prp_reception_status__enum_values_by_name[3] =
{
  { "PRRS_NOT_OK", 1 },
  { "PRRS_NOT_VALID", 2 },
  { "PRRS_OK", 0 },
};
const ProtobufCEnumDescriptor protocol__prp_reception_status__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "protocol.prp_reception_status",
  "prp_reception_status",
  "Protocol__PrpReceptionStatus",
  "protocol",
  3,
  protocol__prp_reception_status__enum_values_by_number,
  3,
  protocol__prp_reception_status__enum_values_by_name,
  1,
  protocol__prp_reception_status__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
