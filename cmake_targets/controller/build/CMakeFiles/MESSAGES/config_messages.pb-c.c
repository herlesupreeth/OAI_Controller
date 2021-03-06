/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: config_messages.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "config_messages.pb-c.h"
void   protocol__prp_cell_config__init
                     (Protocol__PrpCellConfig         *message)
{
  static Protocol__PrpCellConfig init_value = PROTOCOL__PRP_CELL_CONFIG__INIT;
  *message = init_value;
}
size_t protocol__prp_cell_config__get_packed_size
                     (const Protocol__PrpCellConfig *message)
{
  assert(message->base.descriptor == &protocol__prp_cell_config__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_cell_config__pack
                     (const Protocol__PrpCellConfig *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_cell_config__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_cell_config__pack_to_buffer
                     (const Protocol__PrpCellConfig *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_cell_config__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpCellConfig *
       protocol__prp_cell_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpCellConfig *)
     protobuf_c_message_unpack (&protocol__prp_cell_config__descriptor,
                                allocator, len, data);
}
void   protocol__prp_cell_config__free_unpacked
                     (Protocol__PrpCellConfig *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_cell_config__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_ue_config__init
                     (Protocol__PrpUeConfig         *message)
{
  static Protocol__PrpUeConfig init_value = PROTOCOL__PRP_UE_CONFIG__INIT;
  *message = init_value;
}
size_t protocol__prp_ue_config__get_packed_size
                     (const Protocol__PrpUeConfig *message)
{
  assert(message->base.descriptor == &protocol__prp_ue_config__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_ue_config__pack
                     (const Protocol__PrpUeConfig *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_ue_config__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_ue_config__pack_to_buffer
                     (const Protocol__PrpUeConfig *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_ue_config__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpUeConfig *
       protocol__prp_ue_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpUeConfig *)
     protobuf_c_message_unpack (&protocol__prp_ue_config__descriptor,
                                allocator, len, data);
}
void   protocol__prp_ue_config__free_unpacked
                     (Protocol__PrpUeConfig *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_ue_config__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__prp_lc_ue_config__init
                     (Protocol__PrpLcUeConfig         *message)
{
  static Protocol__PrpLcUeConfig init_value = PROTOCOL__PRP_LC_UE_CONFIG__INIT;
  *message = init_value;
}
size_t protocol__prp_lc_ue_config__get_packed_size
                     (const Protocol__PrpLcUeConfig *message)
{
  assert(message->base.descriptor == &protocol__prp_lc_ue_config__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__prp_lc_ue_config__pack
                     (const Protocol__PrpLcUeConfig *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__prp_lc_ue_config__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__prp_lc_ue_config__pack_to_buffer
                     (const Protocol__PrpLcUeConfig *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__prp_lc_ue_config__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__PrpLcUeConfig *
       protocol__prp_lc_ue_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__PrpLcUeConfig *)
     protobuf_c_message_unpack (&protocol__prp_lc_ue_config__descriptor,
                                allocator, len, data);
}
void   protocol__prp_lc_ue_config__free_unpacked
                     (Protocol__PrpLcUeConfig *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__prp_lc_ue_config__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor protocol__prp_cell_config__field_descriptors[33] =
{
  {
    "phy_cell_id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_phy_cell_id),
    offsetof(Protocol__PrpCellConfig, phy_cell_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cell_id",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_cell_id),
    offsetof(Protocol__PrpCellConfig, cell_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pusch_hopping_offset",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_pusch_hopping_offset),
    offsetof(Protocol__PrpCellConfig, pusch_hopping_offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hopping_mode",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_hopping_mode),
    offsetof(Protocol__PrpCellConfig, hopping_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "n_sb",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_n_sb),
    offsetof(Protocol__PrpCellConfig, n_sb),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "phich_resource",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_phich_resource),
    offsetof(Protocol__PrpCellConfig, phich_resource),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "phich_duration",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_phich_duration),
    offsetof(Protocol__PrpCellConfig, phich_duration),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "init_nr_PDCCH_OFDM_sym",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_init_nr_pdcch_ofdm_sym),
    offsetof(Protocol__PrpCellConfig, init_nr_pdcch_ofdm_sym),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "si_config",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpCellConfig, si_config),
    &protocol__prp_si_config__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dl_bandwidth",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_dl_bandwidth),
    offsetof(Protocol__PrpCellConfig, dl_bandwidth),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ul_bandwidth",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_ul_bandwidth),
    offsetof(Protocol__PrpCellConfig, ul_bandwidth),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ul_cyclic_prefix_length",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_ul_cyclic_prefix_length),
    offsetof(Protocol__PrpCellConfig, ul_cyclic_prefix_length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dl_cyclic_prefix_length",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_dl_cyclic_prefix_length),
    offsetof(Protocol__PrpCellConfig, dl_cyclic_prefix_length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "antenna_ports_count",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_antenna_ports_count),
    offsetof(Protocol__PrpCellConfig, antenna_ports_count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "duplex_mode",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_duplex_mode),
    offsetof(Protocol__PrpCellConfig, duplex_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "subframe_assignment",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_subframe_assignment),
    offsetof(Protocol__PrpCellConfig, subframe_assignment),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "special_subframe_patterns",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_special_subframe_patterns),
    offsetof(Protocol__PrpCellConfig, special_subframe_patterns),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mbsfn_subframe_config_rfperiod",
    19,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, n_mbsfn_subframe_config_rfperiod),
    offsetof(Protocol__PrpCellConfig, mbsfn_subframe_config_rfperiod),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mbsfn_subframe_config_rfoffset",
    20,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, n_mbsfn_subframe_config_rfoffset),
    offsetof(Protocol__PrpCellConfig, mbsfn_subframe_config_rfoffset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mbsfn_subframe_config_sfalloc",
    21,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, n_mbsfn_subframe_config_sfalloc),
    offsetof(Protocol__PrpCellConfig, mbsfn_subframe_config_sfalloc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "prach_config_index",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_prach_config_index),
    offsetof(Protocol__PrpCellConfig, prach_config_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "prach_freq_offset",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_prach_freq_offset),
    offsetof(Protocol__PrpCellConfig, prach_freq_offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ra_response_window_size",
    24,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_ra_response_window_size),
    offsetof(Protocol__PrpCellConfig, ra_response_window_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mac_contention_resolution_timer",
    25,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_mac_contention_resolution_timer),
    offsetof(Protocol__PrpCellConfig, mac_contention_resolution_timer),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "max_HARQ_Msg3Tx",
    26,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_max_harq_msg3tx),
    offsetof(Protocol__PrpCellConfig, max_harq_msg3tx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "n1PUCCH_AN",
    27,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_n1pucch_an),
    offsetof(Protocol__PrpCellConfig, n1pucch_an),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "deltaPUCCH_shift",
    28,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_deltapucch_shift),
    offsetof(Protocol__PrpCellConfig, deltapucch_shift),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nRB_cqi",
    29,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_nrb_cqi),
    offsetof(Protocol__PrpCellConfig, nrb_cqi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "srs_subframe_config",
    30,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_srs_subframe_config),
    offsetof(Protocol__PrpCellConfig, srs_subframe_config),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "srs_bw_config",
    31,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_srs_bw_config),
    offsetof(Protocol__PrpCellConfig, srs_bw_config),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "srs_mac_up_pts",
    32,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_srs_mac_up_pts),
    offsetof(Protocol__PrpCellConfig, srs_mac_up_pts),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "enable_64QAM",
    33,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_enable_64qam),
    offsetof(Protocol__PrpCellConfig, enable_64qam),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "carrier_index",
    34,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpCellConfig, has_carrier_index),
    offsetof(Protocol__PrpCellConfig, carrier_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_cell_config__field_indices_by_name[] = {
  13,   /* field[13] = antenna_ports_count */
  32,   /* field[32] = carrier_index */
  1,   /* field[1] = cell_id */
  26,   /* field[26] = deltaPUCCH_shift */
  9,   /* field[9] = dl_bandwidth */
  12,   /* field[12] = dl_cyclic_prefix_length */
  14,   /* field[14] = duplex_mode */
  31,   /* field[31] = enable_64QAM */
  3,   /* field[3] = hopping_mode */
  7,   /* field[7] = init_nr_PDCCH_OFDM_sym */
  23,   /* field[23] = mac_contention_resolution_timer */
  24,   /* field[24] = max_HARQ_Msg3Tx */
  18,   /* field[18] = mbsfn_subframe_config_rfoffset */
  17,   /* field[17] = mbsfn_subframe_config_rfperiod */
  19,   /* field[19] = mbsfn_subframe_config_sfalloc */
  25,   /* field[25] = n1PUCCH_AN */
  27,   /* field[27] = nRB_cqi */
  4,   /* field[4] = n_sb */
  6,   /* field[6] = phich_duration */
  5,   /* field[5] = phich_resource */
  0,   /* field[0] = phy_cell_id */
  20,   /* field[20] = prach_config_index */
  21,   /* field[21] = prach_freq_offset */
  2,   /* field[2] = pusch_hopping_offset */
  22,   /* field[22] = ra_response_window_size */
  8,   /* field[8] = si_config */
  16,   /* field[16] = special_subframe_patterns */
  29,   /* field[29] = srs_bw_config */
  30,   /* field[30] = srs_mac_up_pts */
  28,   /* field[28] = srs_subframe_config */
  15,   /* field[15] = subframe_assignment */
  10,   /* field[10] = ul_bandwidth */
  11,   /* field[11] = ul_cyclic_prefix_length */
};
static const ProtobufCIntRange protocol__prp_cell_config__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 13, 11 },
  { 0, 33 }
};
const ProtobufCMessageDescriptor protocol__prp_cell_config__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_cell_config",
  "PrpCellConfig",
  "Protocol__PrpCellConfig",
  "protocol",
  sizeof(Protocol__PrpCellConfig),
  33,
  protocol__prp_cell_config__field_descriptors,
  protocol__prp_cell_config__field_indices_by_name,
  2,  protocol__prp_cell_config__number_ranges,
  (ProtobufCMessageInit) protocol__prp_cell_config__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_ue_config__field_descriptors[29] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_rnti),
    offsetof(Protocol__PrpUeConfig, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "drx_config",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpUeConfig, drx_config),
    &protocol__prp_drx_config__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "time_alignment_timer",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_time_alignment_timer),
    offsetof(Protocol__PrpUeConfig, time_alignment_timer),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "meas_gap_config_pattern",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_meas_gap_config_pattern),
    offsetof(Protocol__PrpUeConfig, meas_gap_config_pattern),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "meas_gap_config_sf_offset",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_meas_gap_config_sf_offset),
    offsetof(Protocol__PrpUeConfig, meas_gap_config_sf_offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sps_config",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpUeConfig, sps_config),
    &protocol__prp_sps_config__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sr_config",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpUeConfig, sr_config),
    &protocol__prp_sr_config__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cqi_config",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpUeConfig, cqi_config),
    &protocol__prp_cqi_config__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "transmission_mode",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_transmission_mode),
    offsetof(Protocol__PrpUeConfig, transmission_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ue_aggregated_max_bitrate_UL",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(Protocol__PrpUeConfig, has_ue_aggregated_max_bitrate_ul),
    offsetof(Protocol__PrpUeConfig, ue_aggregated_max_bitrate_ul),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ue_aggregated_max_bitrate_DL",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(Protocol__PrpUeConfig, has_ue_aggregated_max_bitrate_dl),
    offsetof(Protocol__PrpUeConfig, ue_aggregated_max_bitrate_dl),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "capabilities",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Protocol__PrpUeConfig, capabilities),
    &protocol__prp_ue_capabilities__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ue_transmission_antenna",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_ue_transmission_antenna),
    offsetof(Protocol__PrpUeConfig, ue_transmission_antenna),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tti_bundling",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_tti_bundling),
    offsetof(Protocol__PrpUeConfig, tti_bundling),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "max_HARQ_tx",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_max_harq_tx),
    offsetof(Protocol__PrpUeConfig, max_harq_tx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "beta_offset_ACK_index",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_beta_offset_ack_index),
    offsetof(Protocol__PrpUeConfig, beta_offset_ack_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "beta_offset_RI_index",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_beta_offset_ri_index),
    offsetof(Protocol__PrpUeConfig, beta_offset_ri_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "beta_offset_CQI_index",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_beta_offset_cqi_index),
    offsetof(Protocol__PrpUeConfig, beta_offset_cqi_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ack_nack_simultaneous_trans",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_ack_nack_simultaneous_trans),
    offsetof(Protocol__PrpUeConfig, ack_nack_simultaneous_trans),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "simultaneous_ack_nack_cqi",
    20,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_simultaneous_ack_nack_cqi),
    offsetof(Protocol__PrpUeConfig, simultaneous_ack_nack_cqi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "aperiodic_cqi_rep_mode",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_aperiodic_cqi_rep_mode),
    offsetof(Protocol__PrpUeConfig, aperiodic_cqi_rep_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tdd_ack_nack_feedback",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_tdd_ack_nack_feedback),
    offsetof(Protocol__PrpUeConfig, tdd_ack_nack_feedback),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ack_nack_repetition_factor",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_ack_nack_repetition_factor),
    offsetof(Protocol__PrpUeConfig, ack_nack_repetition_factor),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "extended_bsr_size",
    24,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_extended_bsr_size),
    offsetof(Protocol__PrpUeConfig, extended_bsr_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ca_support",
    25,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_ca_support),
    offsetof(Protocol__PrpUeConfig, ca_support),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cross_carrier_sched_support",
    26,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_cross_carrier_sched_support),
    offsetof(Protocol__PrpUeConfig, cross_carrier_sched_support),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pcell_carrier_index",
    27,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_pcell_carrier_index),
    offsetof(Protocol__PrpUeConfig, pcell_carrier_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "scell_config",
    28,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__PrpUeConfig, n_scell_config),
    offsetof(Protocol__PrpUeConfig, scell_config),
    &protocol__prp_scell_config__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "scell_deactivation_timer",
    29,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpUeConfig, has_scell_deactivation_timer),
    offsetof(Protocol__PrpUeConfig, scell_deactivation_timer),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_ue_config__field_indices_by_name[] = {
  22,   /* field[22] = ack_nack_repetition_factor */
  18,   /* field[18] = ack_nack_simultaneous_trans */
  20,   /* field[20] = aperiodic_cqi_rep_mode */
  15,   /* field[15] = beta_offset_ACK_index */
  17,   /* field[17] = beta_offset_CQI_index */
  16,   /* field[16] = beta_offset_RI_index */
  24,   /* field[24] = ca_support */
  11,   /* field[11] = capabilities */
  7,   /* field[7] = cqi_config */
  25,   /* field[25] = cross_carrier_sched_support */
  1,   /* field[1] = drx_config */
  23,   /* field[23] = extended_bsr_size */
  14,   /* field[14] = max_HARQ_tx */
  3,   /* field[3] = meas_gap_config_pattern */
  4,   /* field[4] = meas_gap_config_sf_offset */
  26,   /* field[26] = pcell_carrier_index */
  0,   /* field[0] = rnti */
  27,   /* field[27] = scell_config */
  28,   /* field[28] = scell_deactivation_timer */
  19,   /* field[19] = simultaneous_ack_nack_cqi */
  5,   /* field[5] = sps_config */
  6,   /* field[6] = sr_config */
  21,   /* field[21] = tdd_ack_nack_feedback */
  2,   /* field[2] = time_alignment_timer */
  8,   /* field[8] = transmission_mode */
  13,   /* field[13] = tti_bundling */
  10,   /* field[10] = ue_aggregated_max_bitrate_DL */
  9,   /* field[9] = ue_aggregated_max_bitrate_UL */
  12,   /* field[12] = ue_transmission_antenna */
};
static const ProtobufCIntRange protocol__prp_ue_config__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 29 }
};
const ProtobufCMessageDescriptor protocol__prp_ue_config__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_ue_config",
  "PrpUeConfig",
  "Protocol__PrpUeConfig",
  "protocol",
  sizeof(Protocol__PrpUeConfig),
  29,
  protocol__prp_ue_config__field_descriptors,
  protocol__prp_ue_config__field_indices_by_name,
  1,  protocol__prp_ue_config__number_ranges,
  (ProtobufCMessageInit) protocol__prp_ue_config__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__prp_lc_ue_config__field_descriptors[2] =
{
  {
    "rnti",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Protocol__PrpLcUeConfig, has_rnti),
    offsetof(Protocol__PrpLcUeConfig, rnti),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lc_config",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__PrpLcUeConfig, n_lc_config),
    offsetof(Protocol__PrpLcUeConfig, lc_config),
    &protocol__prp_lc_config__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__prp_lc_ue_config__field_indices_by_name[] = {
  1,   /* field[1] = lc_config */
  0,   /* field[0] = rnti */
};
static const ProtobufCIntRange protocol__prp_lc_ue_config__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor protocol__prp_lc_ue_config__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.prp_lc_ue_config",
  "PrpLcUeConfig",
  "Protocol__PrpLcUeConfig",
  "protocol",
  sizeof(Protocol__PrpLcUeConfig),
  2,
  protocol__prp_lc_ue_config__field_descriptors,
  protocol__prp_lc_ue_config__field_indices_by_name,
  1,  protocol__prp_lc_ue_config__number_ranges,
  (ProtobufCMessageInit) protocol__prp_lc_ue_config__init,
  NULL,NULL,NULL    /* reserved[123] */
};
