/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: stats_common.proto */

#ifndef PROTOBUF_C_stats_5fcommon_2eproto__INCLUDED
#define PROTOBUF_C_stats_5fcommon_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Protocol__PrpRlcBsr Protocol__PrpRlcBsr;
typedef struct _Protocol__PrpCsiP10 Protocol__PrpCsiP10;
typedef struct _Protocol__PrpCsiP11 Protocol__PrpCsiP11;
typedef struct _Protocol__PrpCsiP20 Protocol__PrpCsiP20;
typedef struct _Protocol__PrpCsiP21 Protocol__PrpCsiP21;
typedef struct _Protocol__PrpCsiA12 Protocol__PrpCsiA12;
typedef struct _Protocol__PrpCsiA22 Protocol__PrpCsiA22;
typedef struct _Protocol__PrpCsiA20 Protocol__PrpCsiA20;
typedef struct _Protocol__PrpCsiA30 Protocol__PrpCsiA30;
typedef struct _Protocol__PrpCsiA31 Protocol__PrpCsiA31;
typedef struct _Protocol__PrpMsbCqi Protocol__PrpMsbCqi;
typedef struct _Protocol__PrpDlCsi Protocol__PrpDlCsi;
typedef struct _Protocol__PrpDlCqiReport Protocol__PrpDlCqiReport;
typedef struct _Protocol__PrpPagingInfo Protocol__PrpPagingInfo;
typedef struct _Protocol__PrpPagingBufferReport Protocol__PrpPagingBufferReport;
typedef struct _Protocol__PrpUlCqi Protocol__PrpUlCqi;
typedef struct _Protocol__PrpUlCqiReport Protocol__PrpUlCqiReport;
typedef struct _Protocol__PrpNoiseInterferenceReport Protocol__PrpNoiseInterferenceReport;


/* --- enums --- */

/*
 * Flags for MAC Control Elements
 */
typedef enum _Protocol__PrpCeType {
  PROTOCOL__PRP_CE_TYPE__PRPCET_TA = 1,
  PROTOCOL__PRP_CE_TYPE__PRPCET_DRX = 2,
  PROTOCOL__PRP_CE_TYPE__PRPCET_CR = 4,
  PROTOCOL__PRP_CE_TYPE__PRPCET_CA = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__PRP_CE_TYPE)
} Protocol__PrpCeType;
/*
 * Types of DL CSI reports
 */
typedef enum _Protocol__PrpCsiType {
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_P10 = 0,
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_P11 = 1,
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_P20 = 2,
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_P21 = 3,
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_A12 = 4,
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_A22 = 5,
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_A20 = 6,
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_A30 = 7,
  PROTOCOL__PRP_CSI_TYPE__PRCSIT_A31 = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__PRP_CSI_TYPE)
} Protocol__PrpCsiType;
/*
 * The type of UL CQI
 */
typedef enum _Protocol__PrpUlCqiType {
  PROTOCOL__PRP_UL_CQI_TYPE__PRUCT_SRS = 0,
  PROTOCOL__PRP_UL_CQI_TYPE__PRUCT_PUSCH = 1,
  PROTOCOL__PRP_UL_CQI_TYPE__PRUCT_PUCCH_1 = 2,
  PROTOCOL__PRP_UL_CQI_TYPE__PRUCT_PUCCH_2 = 3,
  PROTOCOL__PRP_UL_CQI_TYPE__PRUCT_PRACH = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROTOCOL__PRP_UL_CQI_TYPE)
} Protocol__PrpUlCqiType;

/* --- messages --- */

/*
 * RLC buffer status for a specific logical channel of a UE
 */
struct  _Protocol__PrpRlcBsr
{
  ProtobufCMessage base;
  protobuf_c_boolean has_lc_id;
  uint32_t lc_id;
  protobuf_c_boolean has_tx_queue_size;
  uint32_t tx_queue_size;
  protobuf_c_boolean has_tx_queue_hol_delay;
  uint32_t tx_queue_hol_delay;
  protobuf_c_boolean has_retransmission_queue_size;
  uint32_t retransmission_queue_size;
  protobuf_c_boolean has_retransmission_queue_hol_delay;
  uint32_t retransmission_queue_hol_delay;
  protobuf_c_boolean has_status_pdu_size;
  uint32_t status_pdu_size;
};
#define PROTOCOL__PRP_RLC_BSR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_rlc_bsr__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


/*
 * CSI type P10
 */
struct  _Protocol__PrpCsiP10
{
  ProtobufCMessage base;
  protobuf_c_boolean has_wb_cqi;
  uint32_t wb_cqi;
};
#define PROTOCOL__PRP_CSI_P10__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_p10__descriptor) \
    , 0,0 }


/*
 * CSI type P11
 */
struct  _Protocol__PrpCsiP11
{
  ProtobufCMessage base;
  size_t n_wb_cqi;
  uint32_t *wb_cqi;
  protobuf_c_boolean has_wb_pmi;
  uint32_t wb_pmi;
};
#define PROTOCOL__PRP_CSI_P11__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_p11__descriptor) \
    , 0,NULL, 0,0 }


/*
 * CSI type P20
 */
struct  _Protocol__PrpCsiP20
{
  ProtobufCMessage base;
  protobuf_c_boolean has_wb_cqi;
  uint32_t wb_cqi;
  protobuf_c_boolean has_sb_cqi;
  uint32_t sb_cqi;
  protobuf_c_boolean has_bandwidth_part_index;
  uint32_t bandwidth_part_index;
  protobuf_c_boolean has_sb_index;
  uint32_t sb_index;
};
#define PROTOCOL__PRP_CSI_P20__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_p20__descriptor) \
    , 0,0, 0,0, 0,0, 0,0 }


/*
 * CSI type P21
 */
struct  _Protocol__PrpCsiP21
{
  ProtobufCMessage base;
  size_t n_wb_cqi;
  uint32_t *wb_cqi;
  protobuf_c_boolean has_wb_pmi;
  uint32_t wb_pmi;
  size_t n_sb_cqi;
  uint32_t *sb_cqi;
  protobuf_c_boolean has_badwidth_part_index;
  uint32_t badwidth_part_index;
  protobuf_c_boolean has_sb_index;
  uint32_t sb_index;
};
#define PROTOCOL__PRP_CSI_P21__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_p21__descriptor) \
    , 0,NULL, 0,0, 0,NULL, 0,0, 0,0 }


/*
 * CSI type A12
 */
struct  _Protocol__PrpCsiA12
{
  ProtobufCMessage base;
  size_t n_wb_cqi;
  uint32_t *wb_cqi;
  size_t n_sb_pmi;
  uint32_t *sb_pmi;
};
#define PROTOCOL__PRP_CSI_A12__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_a12__descriptor) \
    , 0,NULL, 0,NULL }


/*
 * CSI type A22
 */
struct  _Protocol__PrpCsiA22
{
  ProtobufCMessage base;
  size_t n_wb_cqi;
  uint32_t *wb_cqi;
  size_t n_sb_cqi;
  uint32_t *sb_cqi;
  protobuf_c_boolean has_wb_pmi;
  uint32_t wb_pmi;
  protobuf_c_boolean has_sb_pmi;
  uint32_t sb_pmi;
  size_t n_sb_list;
  uint32_t *sb_list;
};
#define PROTOCOL__PRP_CSI_A22__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_a22__descriptor) \
    , 0,NULL, 0,NULL, 0,0, 0,0, 0,NULL }


/*
 * CSI type A20
 */
struct  _Protocol__PrpCsiA20
{
  ProtobufCMessage base;
  protobuf_c_boolean has_wb_cqi;
  uint32_t wb_cqi;
  protobuf_c_boolean has_sb_cqi;
  uint32_t sb_cqi;
  size_t n_sb_list;
  uint32_t *sb_list;
};
#define PROTOCOL__PRP_CSI_A20__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_a20__descriptor) \
    , 0,0, 0,0, 0,NULL }


/*
 * CSI type A30
 */
struct  _Protocol__PrpCsiA30
{
  ProtobufCMessage base;
  protobuf_c_boolean has_wb_cqi;
  uint32_t wb_cqi;
  size_t n_sb_cqi;
  uint32_t *sb_cqi;
};
#define PROTOCOL__PRP_CSI_A30__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_a30__descriptor) \
    , 0,0, 0,NULL }


/*
 * CSI type A31
 */
struct  _Protocol__PrpCsiA31
{
  ProtobufCMessage base;
  size_t n_wb_cqi;
  uint32_t *wb_cqi;
  size_t n_sb_cqi;
  Protocol__PrpMsbCqi **sb_cqi;
  protobuf_c_boolean has_wb_pmi;
  uint32_t wb_pmi;
};
#define PROTOCOL__PRP_CSI_A31__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_csi_a31__descriptor) \
    , 0,NULL, 0,NULL, 0,0 }


/*
 * The CQI for the M-preffered subband
 */
struct  _Protocol__PrpMsbCqi
{
  ProtobufCMessage base;
  size_t n_sb_cqi;
  uint32_t *sb_cqi;
};
#define PROTOCOL__PRP_MSB_CQI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_msb_cqi__descriptor) \
    , 0,NULL }


typedef enum {
  PROTOCOL__PRP_DL_CSI__REPORT__NOT_SET = 0,
  PROTOCOL__PRP_DL_CSI__REPORT_P10CSI = 4,
  PROTOCOL__PRP_DL_CSI__REPORT_P11CSI = 5,
  PROTOCOL__PRP_DL_CSI__REPORT_P20CSI = 6,
  PROTOCOL__PRP_DL_CSI__REPORT_P21CSI = 7,
  PROTOCOL__PRP_DL_CSI__REPORT_A12CSI = 8,
  PROTOCOL__PRP_DL_CSI__REPORT_A22CSI = 9,
  PROTOCOL__PRP_DL_CSI__REPORT_A20CSI = 10,
  PROTOCOL__PRP_DL_CSI__REPORT_A30CSI = 11,
  PROTOCOL__PRP_DL_CSI__REPORT_A31CSI = 12,
} Protocol__PrpDlCsi__ReportCase;

/*
 * The CSI report of the UE for a specific servCellIndex
 */
struct  _Protocol__PrpDlCsi
{
  ProtobufCMessage base;
  protobuf_c_boolean has_serv_cell_index;
  uint32_t serv_cell_index;
  protobuf_c_boolean has_ri;
  uint32_t ri;
  protobuf_c_boolean has_type;
  Protocol__PrpCsiType type;
  Protocol__PrpDlCsi__ReportCase report_case;
  union {
    Protocol__PrpCsiP10 *p10csi;
    Protocol__PrpCsiP11 *p11csi;
    Protocol__PrpCsiP20 *p20csi;
    Protocol__PrpCsiP21 *p21csi;
    Protocol__PrpCsiA12 *a12csi;
    Protocol__PrpCsiA22 *a22csi;
    Protocol__PrpCsiA20 *a20csi;
    Protocol__PrpCsiA30 *a30csi;
    Protocol__PrpCsiA31 *a31csi;
  };
};
#define PROTOCOL__PRP_DL_CSI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_dl_csi__descriptor) \
    , 0,0, 0,0, 0,0, PROTOCOL__PRP_DL_CSI__REPORT__NOT_SET, {0} }


/*
 * The full DL CQI report for all CC of a UE
 */
struct  _Protocol__PrpDlCqiReport
{
  ProtobufCMessage base;
  protobuf_c_boolean has_sfn_sn;
  uint32_t sfn_sn;
  size_t n_csi_report;
  Protocol__PrpDlCsi **csi_report;
};
#define PROTOCOL__PRP_DL_CQI_REPORT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_dl_cqi_report__descriptor) \
    , 0,0, 0,NULL }


/*
 * Paging message info
 */
struct  _Protocol__PrpPagingInfo
{
  ProtobufCMessage base;
  protobuf_c_boolean has_paging_index;
  uint32_t paging_index;
  protobuf_c_boolean has_paging_message_size;
  uint32_t paging_message_size;
  protobuf_c_boolean has_paging_subframe;
  uint32_t paging_subframe;
  protobuf_c_boolean has_carrier_index;
  uint32_t carrier_index;
};
#define PROTOCOL__PRP_PAGING_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_paging_info__descriptor) \
    , 0,0, 0,0, 0,0, 0,0 }


/*
 * Report for the paging buffer status
 */
struct  _Protocol__PrpPagingBufferReport
{
  ProtobufCMessage base;
  size_t n_paging_info;
  Protocol__PrpPagingInfo **paging_info;
};
#define PROTOCOL__PRP_PAGING_BUFFER_REPORT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_paging_buffer_report__descriptor) \
    , 0,NULL }


/*
 * UL CQI report for a specific UE for a given report type
 */
struct  _Protocol__PrpUlCqi
{
  ProtobufCMessage base;
  protobuf_c_boolean has_type;
  Protocol__PrpUlCqiType type;
  size_t n_sinr;
  uint32_t *sinr;
  protobuf_c_boolean has_serv_cell_index;
  uint32_t serv_cell_index;
};
#define PROTOCOL__PRP_UL_CQI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_ul_cqi__descriptor) \
    , 0,0, 0,NULL, 0,0 }


/*
 * Full UL CQI report for a specific UE
 */
struct  _Protocol__PrpUlCqiReport
{
  ProtobufCMessage base;
  protobuf_c_boolean has_sfn_sn;
  uint32_t sfn_sn;
  size_t n_cqi_meas;
  Protocol__PrpUlCqi **cqi_meas;
};
#define PROTOCOL__PRP_UL_CQI_REPORT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_ul_cqi_report__descriptor) \
    , 0,0, 0,NULL }


/*
 * The UL noise and interference report for a UE
 */
struct  _Protocol__PrpNoiseInterferenceReport
{
  ProtobufCMessage base;
  protobuf_c_boolean has_sfn_sf;
  uint32_t sfn_sf;
  protobuf_c_boolean has_rip;
  uint32_t rip;
  protobuf_c_boolean has_tnp;
  uint32_t tnp;
};
#define PROTOCOL__PRP_NOISE_INTERFERENCE_REPORT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__prp_noise_interference_report__descriptor) \
    , 0,0, 0,0, 0,0 }


/* Protocol__PrpRlcBsr methods */
void   protocol__prp_rlc_bsr__init
                     (Protocol__PrpRlcBsr         *message);
size_t protocol__prp_rlc_bsr__get_packed_size
                     (const Protocol__PrpRlcBsr   *message);
size_t protocol__prp_rlc_bsr__pack
                     (const Protocol__PrpRlcBsr   *message,
                      uint8_t             *out);
size_t protocol__prp_rlc_bsr__pack_to_buffer
                     (const Protocol__PrpRlcBsr   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpRlcBsr *
       protocol__prp_rlc_bsr__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_rlc_bsr__free_unpacked
                     (Protocol__PrpRlcBsr *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiP10 methods */
void   protocol__prp_csi_p10__init
                     (Protocol__PrpCsiP10         *message);
size_t protocol__prp_csi_p10__get_packed_size
                     (const Protocol__PrpCsiP10   *message);
size_t protocol__prp_csi_p10__pack
                     (const Protocol__PrpCsiP10   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_p10__pack_to_buffer
                     (const Protocol__PrpCsiP10   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiP10 *
       protocol__prp_csi_p10__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_p10__free_unpacked
                     (Protocol__PrpCsiP10 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiP11 methods */
void   protocol__prp_csi_p11__init
                     (Protocol__PrpCsiP11         *message);
size_t protocol__prp_csi_p11__get_packed_size
                     (const Protocol__PrpCsiP11   *message);
size_t protocol__prp_csi_p11__pack
                     (const Protocol__PrpCsiP11   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_p11__pack_to_buffer
                     (const Protocol__PrpCsiP11   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiP11 *
       protocol__prp_csi_p11__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_p11__free_unpacked
                     (Protocol__PrpCsiP11 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiP20 methods */
void   protocol__prp_csi_p20__init
                     (Protocol__PrpCsiP20         *message);
size_t protocol__prp_csi_p20__get_packed_size
                     (const Protocol__PrpCsiP20   *message);
size_t protocol__prp_csi_p20__pack
                     (const Protocol__PrpCsiP20   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_p20__pack_to_buffer
                     (const Protocol__PrpCsiP20   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiP20 *
       protocol__prp_csi_p20__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_p20__free_unpacked
                     (Protocol__PrpCsiP20 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiP21 methods */
void   protocol__prp_csi_p21__init
                     (Protocol__PrpCsiP21         *message);
size_t protocol__prp_csi_p21__get_packed_size
                     (const Protocol__PrpCsiP21   *message);
size_t protocol__prp_csi_p21__pack
                     (const Protocol__PrpCsiP21   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_p21__pack_to_buffer
                     (const Protocol__PrpCsiP21   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiP21 *
       protocol__prp_csi_p21__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_p21__free_unpacked
                     (Protocol__PrpCsiP21 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiA12 methods */
void   protocol__prp_csi_a12__init
                     (Protocol__PrpCsiA12         *message);
size_t protocol__prp_csi_a12__get_packed_size
                     (const Protocol__PrpCsiA12   *message);
size_t protocol__prp_csi_a12__pack
                     (const Protocol__PrpCsiA12   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_a12__pack_to_buffer
                     (const Protocol__PrpCsiA12   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiA12 *
       protocol__prp_csi_a12__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_a12__free_unpacked
                     (Protocol__PrpCsiA12 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiA22 methods */
void   protocol__prp_csi_a22__init
                     (Protocol__PrpCsiA22         *message);
size_t protocol__prp_csi_a22__get_packed_size
                     (const Protocol__PrpCsiA22   *message);
size_t protocol__prp_csi_a22__pack
                     (const Protocol__PrpCsiA22   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_a22__pack_to_buffer
                     (const Protocol__PrpCsiA22   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiA22 *
       protocol__prp_csi_a22__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_a22__free_unpacked
                     (Protocol__PrpCsiA22 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiA20 methods */
void   protocol__prp_csi_a20__init
                     (Protocol__PrpCsiA20         *message);
size_t protocol__prp_csi_a20__get_packed_size
                     (const Protocol__PrpCsiA20   *message);
size_t protocol__prp_csi_a20__pack
                     (const Protocol__PrpCsiA20   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_a20__pack_to_buffer
                     (const Protocol__PrpCsiA20   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiA20 *
       protocol__prp_csi_a20__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_a20__free_unpacked
                     (Protocol__PrpCsiA20 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiA30 methods */
void   protocol__prp_csi_a30__init
                     (Protocol__PrpCsiA30         *message);
size_t protocol__prp_csi_a30__get_packed_size
                     (const Protocol__PrpCsiA30   *message);
size_t protocol__prp_csi_a30__pack
                     (const Protocol__PrpCsiA30   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_a30__pack_to_buffer
                     (const Protocol__PrpCsiA30   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiA30 *
       protocol__prp_csi_a30__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_a30__free_unpacked
                     (Protocol__PrpCsiA30 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpCsiA31 methods */
void   protocol__prp_csi_a31__init
                     (Protocol__PrpCsiA31         *message);
size_t protocol__prp_csi_a31__get_packed_size
                     (const Protocol__PrpCsiA31   *message);
size_t protocol__prp_csi_a31__pack
                     (const Protocol__PrpCsiA31   *message,
                      uint8_t             *out);
size_t protocol__prp_csi_a31__pack_to_buffer
                     (const Protocol__PrpCsiA31   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpCsiA31 *
       protocol__prp_csi_a31__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_csi_a31__free_unpacked
                     (Protocol__PrpCsiA31 *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpMsbCqi methods */
void   protocol__prp_msb_cqi__init
                     (Protocol__PrpMsbCqi         *message);
size_t protocol__prp_msb_cqi__get_packed_size
                     (const Protocol__PrpMsbCqi   *message);
size_t protocol__prp_msb_cqi__pack
                     (const Protocol__PrpMsbCqi   *message,
                      uint8_t             *out);
size_t protocol__prp_msb_cqi__pack_to_buffer
                     (const Protocol__PrpMsbCqi   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpMsbCqi *
       protocol__prp_msb_cqi__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_msb_cqi__free_unpacked
                     (Protocol__PrpMsbCqi *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpDlCsi methods */
void   protocol__prp_dl_csi__init
                     (Protocol__PrpDlCsi         *message);
size_t protocol__prp_dl_csi__get_packed_size
                     (const Protocol__PrpDlCsi   *message);
size_t protocol__prp_dl_csi__pack
                     (const Protocol__PrpDlCsi   *message,
                      uint8_t             *out);
size_t protocol__prp_dl_csi__pack_to_buffer
                     (const Protocol__PrpDlCsi   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpDlCsi *
       protocol__prp_dl_csi__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_dl_csi__free_unpacked
                     (Protocol__PrpDlCsi *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpDlCqiReport methods */
void   protocol__prp_dl_cqi_report__init
                     (Protocol__PrpDlCqiReport         *message);
size_t protocol__prp_dl_cqi_report__get_packed_size
                     (const Protocol__PrpDlCqiReport   *message);
size_t protocol__prp_dl_cqi_report__pack
                     (const Protocol__PrpDlCqiReport   *message,
                      uint8_t             *out);
size_t protocol__prp_dl_cqi_report__pack_to_buffer
                     (const Protocol__PrpDlCqiReport   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpDlCqiReport *
       protocol__prp_dl_cqi_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_dl_cqi_report__free_unpacked
                     (Protocol__PrpDlCqiReport *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpPagingInfo methods */
void   protocol__prp_paging_info__init
                     (Protocol__PrpPagingInfo         *message);
size_t protocol__prp_paging_info__get_packed_size
                     (const Protocol__PrpPagingInfo   *message);
size_t protocol__prp_paging_info__pack
                     (const Protocol__PrpPagingInfo   *message,
                      uint8_t             *out);
size_t protocol__prp_paging_info__pack_to_buffer
                     (const Protocol__PrpPagingInfo   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpPagingInfo *
       protocol__prp_paging_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_paging_info__free_unpacked
                     (Protocol__PrpPagingInfo *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpPagingBufferReport methods */
void   protocol__prp_paging_buffer_report__init
                     (Protocol__PrpPagingBufferReport         *message);
size_t protocol__prp_paging_buffer_report__get_packed_size
                     (const Protocol__PrpPagingBufferReport   *message);
size_t protocol__prp_paging_buffer_report__pack
                     (const Protocol__PrpPagingBufferReport   *message,
                      uint8_t             *out);
size_t protocol__prp_paging_buffer_report__pack_to_buffer
                     (const Protocol__PrpPagingBufferReport   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpPagingBufferReport *
       protocol__prp_paging_buffer_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_paging_buffer_report__free_unpacked
                     (Protocol__PrpPagingBufferReport *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpUlCqi methods */
void   protocol__prp_ul_cqi__init
                     (Protocol__PrpUlCqi         *message);
size_t protocol__prp_ul_cqi__get_packed_size
                     (const Protocol__PrpUlCqi   *message);
size_t protocol__prp_ul_cqi__pack
                     (const Protocol__PrpUlCqi   *message,
                      uint8_t             *out);
size_t protocol__prp_ul_cqi__pack_to_buffer
                     (const Protocol__PrpUlCqi   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpUlCqi *
       protocol__prp_ul_cqi__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_ul_cqi__free_unpacked
                     (Protocol__PrpUlCqi *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpUlCqiReport methods */
void   protocol__prp_ul_cqi_report__init
                     (Protocol__PrpUlCqiReport         *message);
size_t protocol__prp_ul_cqi_report__get_packed_size
                     (const Protocol__PrpUlCqiReport   *message);
size_t protocol__prp_ul_cqi_report__pack
                     (const Protocol__PrpUlCqiReport   *message,
                      uint8_t             *out);
size_t protocol__prp_ul_cqi_report__pack_to_buffer
                     (const Protocol__PrpUlCqiReport   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpUlCqiReport *
       protocol__prp_ul_cqi_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_ul_cqi_report__free_unpacked
                     (Protocol__PrpUlCqiReport *message,
                      ProtobufCAllocator *allocator);
/* Protocol__PrpNoiseInterferenceReport methods */
void   protocol__prp_noise_interference_report__init
                     (Protocol__PrpNoiseInterferenceReport         *message);
size_t protocol__prp_noise_interference_report__get_packed_size
                     (const Protocol__PrpNoiseInterferenceReport   *message);
size_t protocol__prp_noise_interference_report__pack
                     (const Protocol__PrpNoiseInterferenceReport   *message,
                      uint8_t             *out);
size_t protocol__prp_noise_interference_report__pack_to_buffer
                     (const Protocol__PrpNoiseInterferenceReport   *message,
                      ProtobufCBuffer     *buffer);
Protocol__PrpNoiseInterferenceReport *
       protocol__prp_noise_interference_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__prp_noise_interference_report__free_unpacked
                     (Protocol__PrpNoiseInterferenceReport *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__PrpRlcBsr_Closure)
                 (const Protocol__PrpRlcBsr *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiP10_Closure)
                 (const Protocol__PrpCsiP10 *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiP11_Closure)
                 (const Protocol__PrpCsiP11 *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiP20_Closure)
                 (const Protocol__PrpCsiP20 *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiP21_Closure)
                 (const Protocol__PrpCsiP21 *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiA12_Closure)
                 (const Protocol__PrpCsiA12 *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiA22_Closure)
                 (const Protocol__PrpCsiA22 *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiA20_Closure)
                 (const Protocol__PrpCsiA20 *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiA30_Closure)
                 (const Protocol__PrpCsiA30 *message,
                  void *closure_data);
typedef void (*Protocol__PrpCsiA31_Closure)
                 (const Protocol__PrpCsiA31 *message,
                  void *closure_data);
typedef void (*Protocol__PrpMsbCqi_Closure)
                 (const Protocol__PrpMsbCqi *message,
                  void *closure_data);
typedef void (*Protocol__PrpDlCsi_Closure)
                 (const Protocol__PrpDlCsi *message,
                  void *closure_data);
typedef void (*Protocol__PrpDlCqiReport_Closure)
                 (const Protocol__PrpDlCqiReport *message,
                  void *closure_data);
typedef void (*Protocol__PrpPagingInfo_Closure)
                 (const Protocol__PrpPagingInfo *message,
                  void *closure_data);
typedef void (*Protocol__PrpPagingBufferReport_Closure)
                 (const Protocol__PrpPagingBufferReport *message,
                  void *closure_data);
typedef void (*Protocol__PrpUlCqi_Closure)
                 (const Protocol__PrpUlCqi *message,
                  void *closure_data);
typedef void (*Protocol__PrpUlCqiReport_Closure)
                 (const Protocol__PrpUlCqiReport *message,
                  void *closure_data);
typedef void (*Protocol__PrpNoiseInterferenceReport_Closure)
                 (const Protocol__PrpNoiseInterferenceReport *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    protocol__prp_ce_type__descriptor;
extern const ProtobufCEnumDescriptor    protocol__prp_csi_type__descriptor;
extern const ProtobufCEnumDescriptor    protocol__prp_ul_cqi_type__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_rlc_bsr__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_p10__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_p11__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_p20__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_p21__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_a12__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_a22__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_a20__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_a30__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_csi_a31__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_msb_cqi__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_dl_csi__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_dl_cqi_report__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_paging_info__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_paging_buffer_report__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_ul_cqi__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_ul_cqi_report__descriptor;
extern const ProtobufCMessageDescriptor protocol__prp_noise_interference_report__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_stats_5fcommon_2eproto__INCLUDED */