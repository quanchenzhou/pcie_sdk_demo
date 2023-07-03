/*
 The MIT License (MIT)

Copyright (c) 2022 Aili-Light. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef __BASIC_TYPES_H__
#define __BASIC_TYPES_H__

#define ALG_SDK_SEM_INIT_BUFFER_SIZE 1024

#define ALG_SDK_IMAGE_QUEUE_MAX_LEN 32

#define ALG_SDK_IMAGE_WIDTH_ISX021_CONFIG_1 1920
#define ALG_SDK_IMAGE_HEIGHT_ISX021_CONFIG_1 1280

#define ALG_SDK_IMAGE_WIDTH_ISX019_CONFIG_1 1280
#define ALG_SDK_IMAGE_HEIGHT_ISX019_CONFIG_1 960

#define ALG_SDK_IMAGE_WIDTH_ISX031_CONFIG_1 1920
#define ALG_SDK_IMAGE_HEIGHT_ISX031_CONFIG_1 1536

#define ALG_SDK_IMAGE_WIDTH_OX03C_CONFIG_1 1920
#define ALG_SDK_IMAGE_HEIGHT_OX03C_CONFIG_1 1280

#define ALG_SDK_IMAGE_WIDTH_OX08B_CONFIG_1 3840
#define ALG_SDK_IMAGE_HEIGHT_OX08B_CONFIG_1 2160

#define ALG_SDK_IMAGE_SENSOR_TYPE_ISX021 3
#define ALG_SDK_IMAGE_SNESOR_CONFIG_TYPE_ISX021_CONFIG_1 1

#define ALG_SDK_IMAGE_DATA_TYPE_YUV422 1

#define ALG_SDK_HEAD_COMMON_TOPIC_NAME_LEN 128
#define ALG_SDK_PUBSUB_URL_LEN 256
#define ALG_SDK_ITEM_MANAGER_HEAD 66

#define ALG_SDK_TOPIC_NAME_IMAGE_DATA "/image_data/stream"
#define ALG_SDK_TOPIC_NAME_POC_INFO "/dev_info/poc_info"

#define ALG_SDK_CLIENT_THREAD_NUM_MAX 32

#define ALG_SDK_PAYLOAD_LEN_MAX 2 * 3840 * 2180

#define ALG_SDK_AMP_PROTOCAL_HEAD 0x5A
#define ALG_SDK_SERVICE_SENSOR_CONFIG_MAX_LINE 8192
#define ALG_SDK_AMP_PROTOCAL_PAYLOAD_SIZE 65519
#define ALG_SDK_SERVICE_SEND_BUFF_MAX_SIZE 65536
#define ALG_SDK_MAX_CHANNEL 16
#define ALG_SDK_MAX_DESERDES 8
#define ALG_SDK_CHANNEL_PER_DEV 8
#define ALG_SDK_MAX_BIN_SIZE        (4*1024)
#define ALG_SDK_MAX_BIN_SIZE_TOTAL  (16*1024*1024)

#define ALG_SDK_BOARD_TYPE_NAME_LENTH	15
#define ALG_SDK_SERIAL_NUM_NAME_LENTH	15
#define ALG_SDK_PS_VERSION_NUM_LENTH	15
#define ALG_SDK_PL_VERSION_NUM_LENTH	15
#define ALG_SDK_CAMERA_NAME_LENTH	    10
#define ALG_SDK_RESERVED	            10
#define  ALG_SDK_IIC_ADDR_DEV_NUM	    128

#define  ALG_SDK_HARDWARE_VISION_LENGTH        	4
#define  ALG_SDK_CIS_TYPE_LENGTH               	20
#define  ALG_SDK_SERDES_TYPE_LENGTH            	20
#define  ALG_SDK_DATA_TYPE_NAME_LENGTH         	20
#define  ALG_SDK_PRODUCT_ID_LENGTH             	21
#define  ALG_SDK_SENSOR_COLOR_PATTERN_LENGTH   	10
#define  ALG_SDK_ORDER_NUMBER_LENGTH           	15
#define  ALG_SDK_SALE_SERIAL_NUMBER_LENGTH     	25
#define  ALG_SDK_PRODUCT_SERIAL_NUMBER_LENGTH  	15
#define  ALG_SDK_PLOT_NUMBER_LENGTH            	10
#define  ALG_SDK_PRODUCT_DATE_LENGTH           	15

#ifdef __cplusplus
extern "C"
{
#endif

    enum
    {
        ALG_SDK_ITEM_MANAGER_DATA_TYPE_IMAGE = 1,
        ALG_SDK_ITEM_MANAGER_DATA_TYPE_POC_INFO,
        ALG_SDK_ITEM_MANAGER_DATA_TYPE_V1_MSGS,
    };

    enum
    {
        ALG_SDK_SERVICE_SEND_TYPE_PC_WIN = 0,
        ALG_SDK_SERVICE_SEND_TYPE_PC_LINUX = 1,
        ALG_SDK_SERVICE_SEND_TYPE_PC_MAC = 2,
        ALG_SDK_SERVICE_SEND_TYPE_CAM_BOARD_1CH = 3,
        ALG_SDK_SERVICE_SEND_TYPE_CAM_BOARD_2CH = 4,
        ALG_SDK_SERVICE_SEND_TYPE_CAM_BOARD_4CH = 5,
        ALG_SDK_SERVICE_SEND_TYPE_CAM_BOARD_6CH = 6,
        ALG_SDK_SERVICE_SEND_TYPE_CAM_BOARD_8CH = 7,
        ALG_SDK_SERVICE_SEND_TYPE_CAM_BOARD_16CH = 8,
    };

    enum
    {
        ALG_SDK_SERVICE_CMD_TYPE_COMMON = 0,
        ALG_SDK_SERVICE_CMD_TYPE_BOARD = 1,
        ALG_SDK_SERVICE_CMD_TYPE_SPECIAL = 0xFF,
    };

    enum
    {
        ALG_SDK_SERVICE_PACKET_TYPE_RPL = 0,
        ALG_SDK_SERVICE_PACKET_TYPE_REQ = 1,
    };

    enum
    {
        ALG_SDK_SERVICE_ACK_MODE_NO_REPLY = 0,
        ALG_SDK_SERVICE_ACK_MODE_NEED_REPLY = 1,
    };

    enum
    {
        ALG_SDK_SERVICE_COMM_CMD_GET_ID = 0x0,
        ALG_SDK_SERVICE_COMM_CMD_SET_SEQ = 0x01,
        ALG_SDK_SERVICE_COMM_CMD_GET_HW_VERSION = 0x02,
        ALG_SDK_SERVICE_COMM_CMD_GET_SW_VERSION = 0x03,
        ALG_SDK_SERVICE_COMM_CMD_UPDATE_FIRMWARE = 0x04,
        ALG_SDK_SERVICE_COMM_CMD_READ_FILE = 0x05,
        ALG_SDK_SERVICE_COMM_CMD_GET_STATUS = 0x06,
        ALG_SDK_SERVICE_COMM_CMD_SET_TIME = 0x07,
        ALG_SDK_SERVICE_COMM_CMD_GET_TIME = 0x08,
        ALG_SDK_SERVICE_PCIE_CMD_DEBUG_CTL = 0x09,
    };

    enum
    {
        ALG_SDK_SERVICE_PCIE_CMD_WRITE_REG = 0x02,
        ALG_SDK_SERVICE_PCIE_CMD_REAG_REG = 0x03,
        ALG_SDK_SERVICE_PCIE_CMD_STREAM_CTL = 0x0e,
        ALG_SDK_SERVICE_PCIE_CMD_SENSOR_CONFIG = 0x10,
        ALG_SDK_SERVICE_PCIE_CMD_SET_TRIGGER = 0x0f,
        ALG_SDK_SERVICE_PCIE_CMD_FW_UPDATE = 0x11,
        ALG_SDK_SERVICE_PCIE_CMD_BOARD_INFO_GET = 0x12,
        ALG_SDK_SERVICE_PCIE_CMD_CAMERA_INFO_GET = 0x13,
        ALG_SDK_SERVICE_PCIE_CMD_CHANNEL_INFO_GET = 0x14,
        ALG_SDK_SERVICE_PCIE_CMD_I2C_INFO_GET = 0x15,
    };

    enum
    {
        ALG_SDK_CMD_REPLY_ACK_CODE_SUCCESS = 0x00,
        ALG_SDK_CMD_REPLY_ACK_CODE_FAILED = 0x01,
        ALG_SDK_CMD_REPLY_ACK_CODE_PARAM_ERR = 0xE0,
        ALG_SDK_CMD_REPLY_ACK_CODE_DEFAULT = 0xFF,
    };

    enum
    {
        ALG_SDK_SENSOR_TYPE_SONY_ISX021,
        ALG_SDK_SENSOR_TYPE_SONY_ISX019 = 1,
        ALG_SDK_SENSOR_TYPE_SONY_ISX031,
        ALG_SDK_SENSOR_TYPE_SONY_IMX390,
        ALG_SDK_SENSOR_TYPE_SONY_IMX424,
        ALG_SDK_SENSOR_TYPE_SONY_IMX490,
        ALG_SDK_SENSOR_TYPE_SONY_IMX728,

        ALG_SDK_SENSOR_TYPE_OV_OX1F10 = 10,
        ALG_SDK_SENSOR_TYPE_OV_OX3C,
        ALG_SDK_SENSOR_TYPE_OV_OX8B,
        ALG_SDK_SENSOR_TYPE_OV_OX5B1S,

        ALG_SDK_MAX_SENSOR_NUM,
    };

    enum
    {
        ALG_SDK_MAX_GMSL_3G_MODE = 0x00,
        ALG_SDK_MAX_GMSL_6G_MODE = 0x01,
    };

    enum
    {
        ALG_SDK_VIDEO_FORMAT_UNKOWN = 0,
        ALG_SDK_VIDEO_FORMAT_I420 = 2, /* Planar YUY-420 format (YYYYYYYY-UU-VV) */
        ALG_SDK_VIDEO_FORMAT_YV12,     /* Planar YUY-420 format (like I420 but u-v swapped) */
        ALG_SDK_VIDEO_FORMAT_YUY2 = 4, /* Packed YUY-422 format (Y-U-Y-V-Y-U-Y-V) */
        ALG_SDK_VIDEO_FORMAT_YUYV = ALG_SDK_VIDEO_FORMAT_YUY2,
        ALG_SDK_VIDEO_FORMAT_UYVY = 5,   /* Packed YUY-422 format (U-Y-V-Y-U-Y-V-Y) */
        ALG_SDK_VIDEO_FORMAT_VYUY = 64,  /* Packed YUY-422 format (V-Y-U-Y-V-Y-U-Y) */
        ALG_SDK_VIDEO_FORMAT_YVYU = 19,  /* Packed YUY-422 format (Y-V-Y-U-Y-V-Y-U) */
        ALG_SDK_VIDEO_FORMAT_RGBA = 11,  /* RGB packed into 32 bits without padding (R-G-B-A-R-G-B-A) */
        ALG_SDK_VIDEO_FORMAT_BGRA = 12,  /* RGB packed into 32 bits without padding (B-G-R-A-B-G-R-A) */
        ALG_SDK_VIDEO_FORMAT_RGB = 15,   /* RGB packed into 24 bits without padding (R-G-B-R-G-B) */
        ALG_SDK_VIDEO_FORMAT_BGR = 16,   /* RGB packed into 24 bits without padding (B-G-R-B-G-R) */
        ALG_SDK_VIDEO_FORMAT_RAW10 = 90, /* RAW 10-bit */
        ALG_SDK_VIDEO_FORMAT_RAW12 = 91, /* RAW 10-bit */
        ALG_SDK_VIDEO_FORMAT_Y2UV = 104,  /* Packed YUY-422 format (Y2-U-Y1-V-Y2-U-Y1-V) */
        ALG_SDK_VIDEO_FORMAT_Y2VU = 105,  /* Packed YUY-422 format (Y2-V-Y1-U-Y2-V-Y1-U) */
        ALG_SDK_VIDEO_FORMAT_UVY2 = 106,  /* Packed YUY-422 format (U-Y2-V-Y1-U-Y2-V-Y1) */
        ALG_SDK_VIDEO_FORMAT_VUY2 = 107,  /* Packed YUY-422 format (V-Y2-U-Y1-V-Y2-U-Y1) */
    };

    enum
    {
        ALG_SDK_MIPI_DATA_TYPE_DEFAULT = 0x00, /* Default data type (2-bytes) */
        ALG_SDK_MIPI_DATA_TYPE_I420 = 0x02,    /* Type Planar YUV420 */
        ALG_SDK_MIPI_DATA_TYPE_UVY2 = 0x18,    /* Type UYVY (2-bytes) but Y1/Y2 switch */
        ALG_SDK_MIPI_DATA_TYPE_VUY2 = 0x19,    /* Type VYUY (2-bytes) but Y1/Y2 switch */
        ALG_SDK_MIPI_DATA_TYPE_Y2UV = 0x1A,    /* Type YUYV (2-bytes) but Y1/Y2 switch */
        ALG_SDK_MIPI_DATA_TYPE_Y2VU = 0x1B,    /* Type YVYU (2-bytes) but Y1/Y2 switch */
        ALG_SDK_MIPI_DATA_TYPE_UYVY = 0x1C,    /* Type UYVY (2-bytes) */
        ALG_SDK_MIPI_DATA_TYPE_VYUY = 0x1D,    /* Type VYUY (2-bytes) */
        ALG_SDK_MIPI_DATA_TYPE_YUYV = 0x1E,    /* Type YUYV (2-bytes) */
        ALG_SDK_MIPI_DATA_TYPE_YVYU = 0x1F,    /* Type YVYU (2-bytes) */
        ALG_SDK_MIPI_DATA_TYPE_RAW10 = 0x2B,   /* Type RAW10 (1.25-bytes) */
        ALG_SDK_MIPI_DATA_TYPE_RAW12 = 0x2C,   /* Type RAW12 (1.5-bytes) */
    };

    enum
    {
        ALG_SDK_TIME_MODE_UTC = 1 << 0,           /* use UTC Time */
        ALG_SDK_TIME_MODE_UNIX = 1 << 1,          /* use UNIX Time */
        ALG_SDK_TIME_MODE_RELATIVE_TIME = 1 << 2, /* use Relative Time */
        ALG_SDK_TIME_MODE_ALL = 0x07,
    };

    enum
    {
        AILI_TRIGGER_SET_MODE = 0,             //设置工作模式模式
        AILI_TRIGGER_SET_CHANNEL_PARAM,        //设置通道参数
        AILI_TRIGGER_SET_MASTER_TRIGGER_PARAM, //设置主trigger 参数
        AILI_TRIGGER_MAX_CMD_NUM,
    };

    enum
    {
        AILI_MASTER_TRIGGER_DISABLE_MODE = 0,   //不输出
        AILI_MASTER_TRIGGER_EXT_TRG_MODE = 1,   // 外部触发模式
        AILI_MASTER_TRIGGER_INTER_TRG_MODE = 2, //内部触发模式
        AILI_MASTER_TRIGGER_MAX_MODE,
    };

    enum
    {
        AILI_SLAVE_TRIGGER_POSITIVE = 0, //脉冲正极性
        AILI_SLAVE_TRIGGER_NAGTIVE,      //脉冲负极性
        AILI_SLAVE_TRIGGER_MAX,
    };

#pragma pack(push,1)
    typedef struct alg_sdk_module_product_info
    {
        //basic info
        uint32_t    config_table_uid_1ch;
        uint32_t    config_table_uid_2ch;
        uint32_t    config_table_uid_4ch;
        char        product_id[ALG_SDK_PRODUCT_ID_LENGTH];
        uint32_t    vendeor_id;
        uint8_t     module_type;
        char        hardware_vision[ALG_SDK_HARDWARE_VISION_LENGTH];
        uint16_t    firmware_version_uid;
        uint8_t     cis_iic_addr;
        uint8_t     serdes_iic_addr;
        uint8_t     isp_iic_addr;
        uint8_t     pmic_iic_addr;
        uint8_t     eeprom_iic_addr;
        uint8_t     imu_1_iic_addr;
        uint8_t     imu_2_iic_addr;
        uint32_t    eeprom_register_addr;
        char        cis_type[ALG_SDK_CIS_TYPE_LENGTH];
        char        serdes_type[ALG_SDK_SERDES_TYPE_LENGTH];
        uint8_t     hfov;
        uint8_t     resolution;
        char        data_type_name[ALG_SDK_DATA_TYPE_NAME_LENGTH];
        uint8_t     data_type_value;
        char        sensor_color_pattern[ALG_SDK_SENSOR_COLOR_PATTERN_LENGTH];
        uint16_t    width;
        uint16_t    height;
        uint8_t     frame_rate;
        uint8_t     work_mode;
        uint8_t     serdes_mode;

        //product info
        char        order_number[ALG_SDK_ORDER_NUMBER_LENGTH];
        char        sale_serial_number[ALG_SDK_SALE_SERIAL_NUMBER_LENGTH];
        char        product_serial_number[ALG_SDK_PRODUCT_SERIAL_NUMBER_LENGTH];
        char        plot_number[ALG_SDK_PLOT_NUMBER_LENGTH];
        char        product_date[ALG_SDK_PRODUCT_DATE_LENGTH];
        uint8_t     product_location;
        uint8_t     calibrate_internal_parameters;
        float       test_item_mtf_middle;
        float       test_item_mtf_0_5_up;
        float       test_item_mtf_0_5_down;
        float       test_item_mtf_0_5_left;
        float       test_item_mtf_0_5_right;
        float       test_item_mtf_0_7_9_up;
        float       test_item_mtf_0_7_9_down;
        float       test_item_mtf_0_7_9_left;
        float       test_item_mtf_0_7_9_right;
        float       leak_big;
        float       leak_small;
        float       prassure;
        float       threadhold;
        uint32_t    sensor_uid;
        uint32_t    reserved_2;
        uint32_t    reserved_3;
        uint32_t    reserved_4;
        uint32_t    reserved_5;
        uint32_t    reserved_6;
        uint32_t    reserved_7;
        uint32_t    reserved_8;
        uint32_t    reserved_9;
        uint32_t    reserved_10;
        uint16_t    verifycrc16;
    }alg_sdk_module_product_info_t;
#pragma pack(pop)
    typedef struct alg_sdk_pcie_common_head
    {
        uint8_t head;
        uint8_t version;
        char topic_name[128];
        uint8_t crc8;
        uint8_t resv[125];
    } pcie_common_head_t;

    typedef struct alg_sdk_pcie_image_info_meta  
    {
        uint32_t frame_index;
        uint16_t width;
        uint16_t height;
        uint16_t data_type;
        float frame_rate;
        float exposure;
        float again;
        float dgain;
        float temp;
        uint32_t img_size;
        uint64_t timestamp;
    } pcie_image_info_meta_t __attribute__ ((aligned(1)));

    typedef struct alg_sdk_pcie_image_data
    {
        pcie_common_head_t common_head;
        pcie_image_info_meta_t image_info_meta;
        void *payload;
    } pcie_image_data_t;

    typedef struct alg_sdk_pcie_poc_info_meta
    {
        float vol;
        float cur;
        uint64_t timestamp;
    } pcie_poc_info_meta_t;

    typedef struct alg_sdk_pcie_poc_info
    {
        pcie_common_head_t common_head;
        pcie_poc_info_meta_t poc_info_meta;
        // void                     *payload;
    } pcie_poc_info_t;

    /*  V1 Protocal */
    typedef struct alg_sdk_pcie_msgs_meta
    {
        uint8_t head;
        uint8_t version;
        uint8_t height;
        uint8_t data_type;
        size_t data_size;
        uint64_t timestamp;
    } pcie_msgs_meta_t;

    typedef struct alg_sdk_service_get_time
    {
        uint8_t ack_mode;

        uint64_t timestamp;
    } service_get_time_t;
#pragma pack(push,1)
    typedef struct alg_sdk_service_camera_config
    {
        /* Request Field */
        uint8_t ack_mode;
        uint8_t ch_id;
        uint16_t module_type;
        uint16_t width;
        uint16_t height;
        uint8_t deser_mode;
        uint8_t camera_num;
        uint8_t data_type;
        uint16_t line_len;
        uint8_t payload[7 * ALG_SDK_SERVICE_SENSOR_CONFIG_MAX_LINE];

        /* Reply Field */
        uint8_t ack_code;
        uint8_t channel;
    } service_camera_config_t;
    typedef struct alg_sdk_service_camera_fw_update
    {
        /* Request Field */
        uint8_t     ack_mode;
        uint8_t     board_id;
        uint8_t     channel_id;
        uint8_t     is_completed;
        uint32_t    fw_bin_size;
        uint8_t     payload[ALG_SDK_MAX_BIN_SIZE];

        /* Reply Field */
        uint8_t     ack_code;
        uint8_t     dev_id;
    }service_camera_fw_update_t;
    typedef struct alg_sdk_service_board_fw_update
    {
        /* Request Field */
        uint8_t     ack_mode;
        uint8_t     board_id;
        uint32_t    fw_bin_size;
        uint8_t     payload[ALG_SDK_MAX_BIN_SIZE];

        /* Reply Field */
        uint8_t     ack_code;
    } service_board_fw_update_t;

    typedef struct alg_sdk_service_board_channel_info
    {
        uint8_t     ack_mode;
        uint8_t     board_id;
        uint8_t     channel_num;

        uint8_t     ack_code;
        char        camera_link_status;
        char        camera_streaming_on_status;
        char        camera_name[ALG_SDK_CAMERA_NAME_LENTH];
        int         camera_width;
        int         camera_height;
        char        camera_slv_trigger_start;
        uint8_t     camera_mipi_data_type;
        char        reserved1[ALG_SDK_RESERVED];
        char        reserved2[ALG_SDK_RESERVED];
        char        reserved3[ALG_SDK_RESERVED];
        char        reserved4[ALG_SDK_RESERVED];
        char        reserved5[ALG_SDK_RESERVED];
    }service_board_channel_info_get_t;
    typedef struct alg_sdk_service_board_i2c_info
    {
        uint8_t     ack_mode;
        uint8_t     board_id;
        uint8_t     channel_num;

        uint8_t     ack_code;
        uint8_t     i2c_addr_dev_cnt;
        uint8_t     i2c_addr_array[ALG_SDK_IIC_ADDR_DEV_NUM];
    }service_board_i2c_info_get_t;

    typedef struct alg_sdk_service_board_info
    {
        /* Request Field */
        uint8_t     ack_mode;
        uint8_t     board_id;

        /* Reply Field */
        uint8_t     ack_code;
        char        device_type[ALG_SDK_BOARD_TYPE_NAME_LENTH];
        char        SN[ALG_SDK_SERIAL_NUM_NAME_LENTH];
        uint8_t     hardware_version_num;
        char        ps_firmware_version[ALG_SDK_PS_VERSION_NUM_LENTH];
        char        pl_firmware_version[ALG_SDK_PL_VERSION_NUM_LENTH];
        char        board_channel_num;
    } service_board_info_get_t;
    typedef struct alg_sdk_service_camera_info
    {
        /* Request Field */
        uint8_t     ack_mode;
        uint8_t     board_id;
        uint8_t     channel;

        /* Reply Field */
        uint8_t     ack_code;
        alg_sdk_module_product_info_t   camera_info;
    } service_camera_info_get_t;
#pragma pack(pop)
    typedef struct alg_sdk_service_camera_read_reg
    {
        /* Request Field */
        uint8_t ack_mode;
        uint8_t ch_id;
        uint16_t msg_type; // 0x1608 or 0x0808
        uint16_t device_addr;
        uint16_t line_len;
        uint16_t payload[ALG_SDK_SERVICE_SENSOR_CONFIG_MAX_LINE];

        /* Reply Field */
        uint8_t ack_code;
        uint8_t channel;
        uint16_t length_r;
        uint16_t data[ALG_SDK_SERVICE_SENSOR_CONFIG_MAX_LINE];
    } service_camera_read_reg_t;

    typedef struct alg_sdk_service_camera_write_reg
    {
        /* Request Field */
        uint8_t ack_mode;
        uint8_t ch_id;
        uint16_t msg_type; // 0x1608 or 0x0808
        uint16_t device_addr;
        uint16_t line_len;
        uint16_t payload[2 * ALG_SDK_SERVICE_SENSOR_CONFIG_MAX_LINE];

        /* Reply Field */
        uint8_t ack_code;
        uint8_t channel;
    } service_camera_write_reg_t;

    typedef struct alg_sdk_service_stream_control
    {
        /* Request Field */
        uint8_t ack_mode;
        uint8_t select[ALG_SDK_MAX_CHANNEL];
        uint8_t control[ALG_SDK_MAX_CHANNEL];

        /* Reply Field */
        uint8_t ack_code;
        uint8_t ch_sel[ALG_SDK_MAX_CHANNEL];
    } service_stream_control_t;

    typedef struct alg_sdk_service_debug_control
    {
        /* Request Field */
        uint8_t ack_mode;
        uint8_t debug_flag;

        /* Reply Field */
        uint8_t ack_code;
        uint8_t ack_debug_flag;
    } service_debug_control_t;

    typedef struct alg_sdk_amp_msg
    {
        uint8_t head;
        uint8_t version;
        uint8_t send_type;
        uint8_t send_id;
        uint8_t crc8;
        uint8_t receive_type;
        uint8_t receive_id;
        uint16_t seq;
        uint8_t ack_mode;
        uint8_t packet_mode;
        uint8_t cmd_type;
        uint8_t cmd_id;
        uint16_t length;
        uint16_t crc16;
        uint8_t payload[ALG_SDK_AMP_PROTOCAL_PAYLOAD_SIZE];
    } alg_sdk_amp_msg_t;

    typedef struct alg_sdk_task
    {
        alg_sdk_amp_msg_t amp_msg;
        struct alg_sdk_task *next;
        void *control;
    } alg_sdk_task_t;
#pragma pack(1)
    typedef struct alg_sdk_utc_time
    {
        uint16_t year : 12, // max 4095
            month : 4;      // max 15
        uint8_t day : 5,    // max 31
            weekday : 3;    // max 7
        uint8_t hour;
        uint8_t minute;
        uint8_t second;
        uint32_t us;
    } aili_utc_time_t;
    typedef struct
    {
        uint8_t using_time_mode;
        aili_utc_time_t utc_time;
        uint64_t unix_time;
        uint64_t relative_time;
    } aili_timestamp_ctl_t;
#pragma pack()
 typedef struct alg_sdk_service_set_time
    {
        /* Request Field */
        uint8_t ack_mode;
        uint8_t dev_index;
        uint8_t time_mode;
        uint64_t unix_time;
        uint64_t relative_time;
        aili_utc_time_t utc_time;

        /* Reply Field */
        uint8_t ack_code;
    } service_set_time_t;
    typedef struct
    {
        uint32_t trigger_delay_time_us; //触发延时
        uint32_t trigger_valid_time_us; //脉宽时间
        uint8_t trigger_polarity;       //脉冲极性
    } aili_slave_trigger_control_param_t;

    typedef struct
    {
        uint8_t private_cmd_id; //私有command
        uint8_t trigger_mode;   // trigger模式，参考aili_master_trigger_mode_e
    } aili_tirgger_set_mode_t __attribute__((aligned(1)));

    typedef struct
    {
        uint8_t private_cmd_id;
        aili_slave_trigger_control_param_t control_param; //参考aili_slave_trigger_control_param_t
        uint8_t is_complete;                              //是否设置完所有通道
    } aili_tirgger_set_channel_param_t __attribute__((aligned(1)));

    typedef struct
    {
        uint8_t private_cmd_id;
        uint8_t trigger_mode;         // trigger模式，参考aili_master_trigger_mode_e
        uint32_t master_trigger_freq; //如果为内触发模式，设置触发频率，外触发忽略这个参数
    } aili_tirgger_set_master_param_t __attribute__((aligned(1)));

    typedef union
    {
        uint8_t private_cmd_id;
        aili_tirgger_set_mode_t set_mode;
        aili_tirgger_set_channel_param_t set_channel_param;
        aili_tirgger_set_master_param_t set_master_param;
    } aili_trigger_set_cmd_data_t __attribute__((aligned(1)));

    typedef struct alg_sdk_service_set_trigger
    {
        /* Request Field */
        uint8_t ack_mode;
        uint8_t select[ALG_SDK_MAX_CHANNEL];
        uint8_t set_mode;
        uint8_t trigger_mode;
        uint32_t master_trigger_freq;
        aili_slave_trigger_control_param_t control_param;

        /* Reply Field */
        uint8_t ack_code;
    } service_set_trigger_t;

#ifdef __cplusplus
}
#endif
#endif
