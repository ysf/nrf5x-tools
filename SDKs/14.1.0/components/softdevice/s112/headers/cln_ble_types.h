#ifndef BLE_TYPES_H__
#define BLE_TYPES_H__ 
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
#define BLE_CONN_HANDLE_INVALID 0xFFFF
#define BLE_CONN_HANDLE_ALL 0xFFFE
#define BLE_UUID_UNKNOWN 0x0000
#define BLE_UUID_SERVICE_PRIMARY 0x2800
#define BLE_UUID_SERVICE_SECONDARY 0x2801
#define BLE_UUID_SERVICE_INCLUDE 0x2802
#define BLE_UUID_CHARACTERISTIC 0x2803
#define BLE_UUID_DESCRIPTOR_CHAR_EXT_PROP 0x2900
#define BLE_UUID_DESCRIPTOR_CHAR_USER_DESC 0x2901
#define BLE_UUID_DESCRIPTOR_CLIENT_CHAR_CONFIG 0x2902
#define BLE_UUID_DESCRIPTOR_SERVER_CHAR_CONFIG 0x2903
#define BLE_UUID_DESCRIPTOR_CHAR_PRESENTATION_FORMAT 0x2904
#define BLE_UUID_DESCRIPTOR_CHAR_AGGREGATE_FORMAT 0x2905
#define BLE_UUID_GATT 0x1801
#define BLE_UUID_GATT_CHARACTERISTIC_SERVICE_CHANGED 0x2A05
#define BLE_UUID_GAP 0x1800
#define BLE_UUID_GAP_CHARACTERISTIC_DEVICE_NAME 0x2A00
#define BLE_UUID_GAP_CHARACTERISTIC_APPEARANCE 0x2A01
#define BLE_UUID_GAP_CHARACTERISTIC_RECONN_ADDR 0x2A03
#define BLE_UUID_GAP_CHARACTERISTIC_PPCP 0x2A04
#define BLE_UUID_GAP_CHARACTERISTIC_CAR 0x2AA6
#define BLE_UUID_GAP_CHARACTERISTIC_RPA_ONLY 0x2AC9
#define BLE_UUID_TYPE_UNKNOWN 0x00
#define BLE_UUID_TYPE_BLE 0x01
#define BLE_UUID_TYPE_VENDOR_BEGIN 0x02
#define BLE_APPEARANCE_UNKNOWN 0
#define BLE_APPEARANCE_GENERIC_PHONE 64
#define BLE_APPEARANCE_GENERIC_COMPUTER 128
#define BLE_APPEARANCE_GENERIC_WATCH 192
#define BLE_APPEARANCE_WATCH_SPORTS_WATCH 193
#define BLE_APPEARANCE_GENERIC_CLOCK 256
#define BLE_APPEARANCE_GENERIC_DISPLAY 320
#define BLE_APPEARANCE_GENERIC_REMOTE_CONTROL 384
#define BLE_APPEARANCE_GENERIC_EYE_GLASSES 448
#define BLE_APPEARANCE_GENERIC_TAG 512
#define BLE_APPEARANCE_GENERIC_KEYRING 576
#define BLE_APPEARANCE_GENERIC_MEDIA_PLAYER 640
#define BLE_APPEARANCE_GENERIC_BARCODE_SCANNER 704
#define BLE_APPEARANCE_GENERIC_THERMOMETER 768
#define BLE_APPEARANCE_THERMOMETER_EAR 769
#define BLE_APPEARANCE_GENERIC_HEART_RATE_SENSOR 832
#define BLE_APPEARANCE_HEART_RATE_SENSOR_HEART_RATE_BELT 833
#define BLE_APPEARANCE_GENERIC_BLOOD_PRESSURE 896
#define BLE_APPEARANCE_BLOOD_PRESSURE_ARM 897
#define BLE_APPEARANCE_BLOOD_PRESSURE_WRIST 898
#define BLE_APPEARANCE_GENERIC_HID 960
#define BLE_APPEARANCE_HID_KEYBOARD 961
#define BLE_APPEARANCE_HID_MOUSE 962
#define BLE_APPEARANCE_HID_JOYSTICK 963
#define BLE_APPEARANCE_HID_GAMEPAD 964
#define BLE_APPEARANCE_HID_DIGITIZERSUBTYPE 965
#define BLE_APPEARANCE_HID_CARD_READER 966
#define BLE_APPEARANCE_HID_DIGITAL_PEN 967
#define BLE_APPEARANCE_HID_BARCODE 968
#define BLE_APPEARANCE_GENERIC_GLUCOSE_METER 1024
#define BLE_APPEARANCE_GENERIC_RUNNING_WALKING_SENSOR 1088
#define BLE_APPEARANCE_RUNNING_WALKING_SENSOR_IN_SHOE 1089
#define BLE_APPEARANCE_RUNNING_WALKING_SENSOR_ON_SHOE 1090
#define BLE_APPEARANCE_RUNNING_WALKING_SENSOR_ON_HIP 1091
#define BLE_APPEARANCE_GENERIC_CYCLING 1152
#define BLE_APPEARANCE_CYCLING_CYCLING_COMPUTER 1153
#define BLE_APPEARANCE_CYCLING_SPEED_SENSOR 1154
#define BLE_APPEARANCE_CYCLING_CADENCE_SENSOR 1155
#define BLE_APPEARANCE_CYCLING_POWER_SENSOR 1156
#define BLE_APPEARANCE_CYCLING_SPEED_CADENCE_SENSOR 1157
#define BLE_APPEARANCE_GENERIC_PULSE_OXIMETER 3136
#define BLE_APPEARANCE_PULSE_OXIMETER_FINGERTIP 3137
#define BLE_APPEARANCE_PULSE_OXIMETER_WRIST_WORN 3138
#define BLE_APPEARANCE_GENERIC_WEIGHT_SCALE 3200
#define BLE_APPEARANCE_GENERIC_OUTDOOR_SPORTS_ACT 5184
#define BLE_APPEARANCE_OUTDOOR_SPORTS_ACT_LOC_DISP 5185
#define BLE_APPEARANCE_OUTDOOR_SPORTS_ACT_LOC_AND_NAV_DISP 5186
#define BLE_APPEARANCE_OUTDOOR_SPORTS_ACT_LOC_POD 5187
#define BLE_APPEARANCE_OUTDOOR_SPORTS_ACT_LOC_AND_NAV_POD 5188
#define BLE_UUID_BLE_ASSIGN(instance,value) do {\
            instance.type = BLE_UUID_TYPE_BLE; \
            instance.uuid = value;} while(0)
#define BLE_UUID_COPY_PTR(dst,src) do {\
            (dst)->type = (src)->type; \
            (dst)->uuid = (src)->uuid;} while(0)
#define BLE_UUID_COPY_INST(dst,src) do {\
            (dst).type = (src).type; \
            (dst).uuid = (src).uuid;} while(0)
#define BLE_UUID_EQ(p_uuid1,p_uuid2) \
            (((p_uuid1)->type == (p_uuid2)->type) && ((p_uuid1)->uuid == (p_uuid2)->uuid))
#define BLE_UUID_NEQ(p_uuid1,p_uuid2) \
            (((p_uuid1)->type != (p_uuid2)->type) || ((p_uuid1)->uuid != (p_uuid2)->uuid))
typedef struct
{
  uint8_t uuid128[16];
} ble_uuid128_t;
typedef struct
{
  uint16_t uuid;
  uint8_t type;
} ble_uuid_t;
typedef struct
{
  uint8_t *p_data;
  uint16_t len;
} ble_data_t;
#ifdef __cplusplus
}
#endif
#endif
