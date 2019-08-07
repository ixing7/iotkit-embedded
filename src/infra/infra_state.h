/*
 * Copyright (C) 2015-2019 Alibaba Group Holding Limited
 */

#ifndef __INFRA_STATE_H__
#define __INFRA_STATE_H__

#ifdef __cplusplus
extern "C" {
#endif

#define STATE_BASE                                  (0x0000)

/* General: 0x0000 ~ 0x00FF */
#define STATE_SUCCESS                               (STATE_BASE - 0x0000)

/* General: 0x0000 ~ 0x00FF */

/* User Input: 0x0100 ~ 0x01FF */
#define STATE_USER_INPUT_BASE                       (-0x0100)
#define STATE_USER_INPUT_INVALID                    (STATE_USER_INPUT_BASE - 0x0001)
#define STATE_USER_INPUT_PK                         (STATE_USER_INPUT_BASE - 0x0002)
#define STATE_USER_INPUT_PS                         (STATE_USER_INPUT_BASE - 0x0003)
#define STATE_USER_INPUT_DN                         (STATE_USER_INPUT_BASE - 0x0004)
#define STATE_USER_INPUT_DS                         (STATE_USER_INPUT_BASE - 0x0005)
#define STATE_USER_INPUT_HTTP_DOMAIN                (STATE_USER_INPUT_BASE - 0x0006)
#define STATE_USER_INPUT_MQTT_DOMAIN                (STATE_USER_INPUT_BASE - 0x0007)
#define STATE_USER_INPUT_HTTP_PORT                  (STATE_USER_INPUT_BASE - 0x0008)
#define STATE_USER_INPUT_HTTP_TIMEOUT               (STATE_USER_INPUT_BASE - 0x0009)
#define STATE_USER_INPUT_HTTP_OPTION                (STATE_USER_INPUT_BASE - 0x000A)
#define STATE_USER_INPUT_HTTP_POST_DATA             (STATE_USER_INPUT_BASE - 0x000B)
#define STATE_USER_INPUT_HTTP_URL                   (STATE_USER_INPUT_BASE - 0x000C)
#define STATE_USER_INPUT_HTTP_PATH                  (STATE_USER_INPUT_BASE - 0x000D)
#define STATE_USER_INPUT_HTTP_CONTENT_LEN           (STATE_USER_INPUT_BASE - 0x000E)

/* User Input: 0x0100 ~ 0x01FF */

/* System: 0x0200 ~ 0x02FF */
#define STATE_SYS_DEPEND_BASE                       (-0x0200)
#define STATE_SYS_DEPEND_MALLOC                     (STATE_SYS_DEPEND_BASE - 0x0001)
#define STATE_SYS_DEPEND_KV_GET                     (STATE_SYS_DEPEND_BASE - 0x0002)
#define STATE_SYS_DEPEND_KV_SET                     (STATE_SYS_DEPEND_BASE - 0x0003)
#define STATE_SYS_DEPEND_KV_DELETE                  (STATE_SYS_DEPEND_BASE - 0x0004)
#define STATE_SYS_DEPEND_TIMER_CREATE               (STATE_SYS_DEPEND_BASE - 0x0005)
#define STATE_SYS_DEPEND_TIMER_START                (STATE_SYS_DEPEND_BASE - 0x0006)
#define STATE_SYS_DEPEND_TIMER_STOP                 (STATE_SYS_DEPEND_BASE - 0x0007)
#define STATE_SYS_DEPEND_TIMER_DELETE               (STATE_SYS_DEPEND_BASE - 0x0008)
#define STATE_SYS_DEPEND_MUTEX_CREATE               (STATE_SYS_DEPEND_BASE - 0x0009)
#define STATE_SYS_DEPEND_MUTEX_LOCK                 (STATE_SYS_DEPEND_BASE - 0x000A)
#define STATE_SYS_DEPEND_MUTEX_UNLOCK               (STATE_SYS_DEPEND_BASE - 0x000B)
#define STATE_SYS_DEPEND_NWK_CLOSE                  (STATE_SYS_DEPEND_BASE - 0x000C)
#define STATE_SYS_DEPEND_NWK_TIMEOUT                (STATE_SYS_DEPEND_BASE - 0x000D)
#define STATE_SYS_DEPEND_NWK_INVALID_HANDLE         (STATE_SYS_DEPEND_BASE - 0x000E)
#define STATE_SYS_DEPEND_NWK_READ_ERROR             (STATE_SYS_DEPEND_BASE - 0x000F)

/* System: 0x0200 ~ 0x02FF */

/* MQTT: 0x0300 ~ 0x03FF */
#define STATE_MQTT_BASE                             (-0x0300)

/* Deserialized CONNACK from MQTT server says protocol version is unacceptable */
#define STATE_MQTT_CONNACK_VERSION_UNACCEPT         (STATE_MQTT_BASE - 0x0001)
/* Deserialized CONNACK from MQTT server says identifier is rejected */
#define STATE_MQTT_CONNACK_IDENT_REJECT             (STATE_MQTT_BASE - 0x0002)
/* Deserialized CONNACK from MQTT server says service is not available */
#define STATE_MQTT_CONNACK_SERVICE_NA               (STATE_MQTT_BASE - 0x0003)
/* Deserialized CONNACK from MQTT server says it failed to authorize */
#define STATE_MQTT_CONNACK_NOT_AUTHORIZED           (STATE_MQTT_BASE - 0x0004)
/* Deserialized CONNACK from MQTT server says username/password is invalid */
#define STATE_MQTT_CONNACK_BAD_USERDATA             (STATE_MQTT_BASE - 0x0005)

#define STATE_MQTT_WAIT_RECONN_TIMER                (STATE_MQTT_BASE - 0x0006)
#define STATE_MQTT_SIGN_HOSTNAME_BUF_SHORT          (STATE_MQTT_BASE - 0x0007)
#define STATE_MQTT_SIGN_USERNAME_BUF_SHORT          (STATE_MQTT_BASE - 0x0008)
#define STATE_MQTT_SIGN_CLIENTID_BUF_SHORT          (STATE_MQTT_BASE - 0x0009)
#define STATE_MQTT_SIGN_SOURCE_BUF_SHORT            (STATE_MQTT_BASE - 0x000A)
#define STATE_MQTT_WRAPPER_INIT_FAIL                (STATE_MQTT_BASE - 0x000B)
#define STATE_MQTT_SERIALIZE_CONN_ERROR             (STATE_MQTT_BASE - 0x000C)
#define STATE_MQTT_SERIALIZE_CONNACK_ERROR          (STATE_MQTT_BASE - 0x000D)
#define STATE_MQTT_SERIALIZE_PUBACK_ERROR           (STATE_MQTT_BASE - 0x000E)
#define STATE_MQTT_SERIALIZE_PINGREQ_ERROR          (STATE_MQTT_BASE - 0x000F)
#define STATE_MQTT_SERIALIZE_SUB_ERROR              (STATE_MQTT_BASE - 0x0010)
#define STATE_MQTT_SERIALIZE_UNSUB_ERROR            (STATE_MQTT_BASE - 0x0011)
#define STATE_MQTT_SERIALIZE_PUBLISH_ERROR          (STATE_MQTT_BASE - 0x0012)
#define STATE_MQTT_DESERIALIZE_SUBACK_ERROR         (STATE_MQTT_BASE - 0x0013)
#define STATE_MQTT_DESERIALIZE_PUBLISH_ERROR        (STATE_MQTT_BASE - 0x0014)
#define STATE_MQTT_DESERIALIZE_UBSUBACK_ERROR       (STATE_MQTT_BASE - 0x0015)
#define STATE_MQTT_PACKET_READ_ERROR                (STATE_MQTT_BASE - 0x0016)
#define STATE_MQTT_CONNACK_UNKNOWN_ERROR            (STATE_MQTT_BASE - 0x0017)
#define STATE_MQTT_RX_BUFFER_TOO_SHORT              (STATE_MQTT_BASE - 0x0018)
#define STATE_MQTT_TX_BUFFER_TOO_SHORT              (STATE_MQTT_BASE - 0x0019)
#define STATE_MQTT_TOPIC_BUF_TOO_SHORT              (STATE_MQTT_BASE - 0x001A)
#define STATE_MQTT_CONN_RETRY_EXCEED_MAX            (STATE_MQTT_BASE - 0x001B)
#define STATE_MQTT_QOS1_REPUB_EXCEED_MAX            (STATE_MQTT_BASE - 0x001C)
#define STATE_MQTT_PUB_QOS_INVALID                  (STATE_MQTT_BASE - 0x001D)
#define STATE_MQTT_IN_OFFLINE_STATUS                (STATE_MQTT_BASE - 0x001E)
#define STATE_MQTT_RECV_UNKNOWN_PACKET              (STATE_MQTT_BASE - 0x001F)
#define STATE_MQTT_CLI_EXCEED_MAX                   (STATE_MQTT_BASE - 0x0020)
#define STATE_MQTT_SUB_EXCEED_MAX                   (STATE_MQTT_BASE - 0x0021)
#define STATE_MQTT_UNEXP_TOPIC_FORMAT               (STATE_MQTT_BASE - 0x0022)
#define STATE_MQTT_SYNC_SUB_TIMEOUT                 (STATE_MQTT_BASE - 0x0023)
#define STATE_MQTT_ASYNC_STACK_CONN_IN_PROG         (STATE_MQTT_BASE - 0x0024)
#define STATE_MQTT_ASYNC_STACK_NOT_SUPPORT          (STATE_MQTT_BASE - 0x0025)
#define STATE_MQTT_ASYNC_STACK_UNKNOWN_EVENT        (STATE_MQTT_BASE - 0x0026)

/* MQTT: 0x0300 ~ 0x03FF */

/* WiFi Provision: 0x0400 ~ 0x04FF */
#define STATE_WIFI_BASE                             (-0x0400)

/* WiFi Provision: 0x0400 ~ 0x04FF */

/* COAP: 0x0500 ~ 0x05FF */
#define STATE_COAP_BASE                             (-0x0500)

/* COAP: 0x0500 ~ 0x05FF */

/* HTTP: 0x0600 ~ 0x06FF */
#define STATE_HTTP_BASE                             (-0x0600)
#define STATE_HTTP_DYNREG_FAIL_RESP                 (STATE_HTTP_BASE - 0x0001)
#define STATE_HTTP_DYNREG_INVALID_DS                (STATE_HTTP_BASE - 0x0002)
#define STATE_HTTP_PREAUTH_REQ_BUF_SHORT            (STATE_HTTP_BASE - 0x0003)
#define STATE_HTTP_PREAUTH_INVALID_RESP             (STATE_HTTP_BASE - 0x0004)

/* HTTP: 0x0600 ~ 0x06FF */

/* OTA: 0x0700 ~ 0x07FF */
#define STATE_OTA_BASE                              (-0x0700)

/* OTA: 0x0700 ~ 0x07FF */

/* Bind: 0x0800 ~ 0x08FF */
#define STATE_BIND_BASE                             (-0x0800)
#define STATE_BIND_SET_APP_TOKEN                    (STATE_BIND_BASE - 0x0001)
#define STATE_BIND_ALREADY_RESET                    (STATE_BIND_BASE - 0x0002)
#define STATE_BIND_REPORT_TOKEN                     (STATE_BIND_BASE - 0x0003)
#define STATE_BIND_REPORT_TOKEN_TIMEOUT             (STATE_BIND_BASE - 0x0004)
#define STATE_BIND_REPORT_TOKEN_SUCCESS             (STATE_BIND_BASE - 0x0005)
#define STATE_BIND_COAP_INIT_FAIL                   (STATE_BIND_BASE - 0x0006)
#define STATE_BIND_NOTIFY_TOKEN_SENT                (STATE_BIND_BASE - 0x0007)
#define STATE_BIND_RECV_TOKEN_QUERY                 (STATE_BIND_BASE - 0x0008)
#define STATE_BIND_SENT_TOKEN_RESP                  (STATE_BIND_BASE - 0x0009)
#define STATE_BIND_RST_IN_PROGRESS                  (STATE_BIND_BASE - 0x000A)
#define STATE_BIND_MQTT_MSG_INVALID                 (STATE_BIND_BASE - 0x000B)
#define STATE_BIND_COAP_MSG_INVALID                 (STATE_BIND_BASE - 0x000C)


/* Bind: 0x0800 ~ 0x08FF */

/* Device Model: 0x0900 ~ 0x09FF */
#define STATE_DEV_MODEL_BASE                        (-0x0900)

/* Device Model: 0x0900 ~ 0x09FF */

/* SubDevice Mgmt: 0x0A00 ~ 0x0AFF */
#define STATE_SUB_DEVICE_BASE                       (-0x0A00)

/* SubDevice Mgmt: 0x0A00 ~ 0x0AFF */

#ifdef __cplusplus
}
#endif
#endif  /* __INFRA_STATE_H__ */

