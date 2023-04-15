#ifndef _USER_CONFIG_
#define _USER_CONFIG_

#define ESP_UBROKER_VERSION "V2.0.10"

#define WIFI_SSID            "ssid"
#define WIFI_PASSWORD        "password"

#define WIFI_AP_SSID         "MyAP"
#define WIFI_AP_PASSWORD     "none"
#define WIFI_AP_CHANNEL      1

#define MAX_CLIENTS	     8

//
// Here the MQTT stuff
//

//
// Define this if you want to have it work as a MQTT client
// Define MQTT_SSL_ENABLE if you need SSL for the *MQTT client*
//
#define MQTT_CLIENT 	1
#define MQTT_SSL_ENABLE	1

//
// Change this to adjust memory consuption of one MQTT connection
// MQTT_BUF_SIZE is the max. size of pending inbound messages for one connection
// QUEUE_BUFFER_SIZE is the max. size of all pending outbound messages for one connection 
//
#define MQTT_BUF_SIZE   2048
#define QUEUE_BUFFER_SIZE 2048

#define MQTT_KEEPALIVE    120  /*seconds*/
#define MQTT_RECONNECT_TIMEOUT  5 /*seconds*/
//#define PROTOCOL_NAMEv31  /*MQTT version 3.1 compatible with Mosquitto v0.15*/
#define PROTOCOL_NAMEv311     /*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/

#define MQTT_ID "ESPBroker"

//
// Define this if you want to have script support.
//
#define SCRIPTED  1

// Some params for scripts

#define MAX_SCRIPT_SIZE 0x1000
#define MAX_TIMERS	4
#define MAX_GPIOS	3
#define PWM_MAX_CHANNELS 8
#define MAX_VARS	10
#define DEFAULT_VAR_LEN	16
#define MAX_TIMESTAMPS	6
#define MAX_FLASH_SLOTS	8
#define FLASH_SLOT_LEN	64

//
// Define this if you want to have GPIO OUT support in scripts.
// Define GPIO_PWM if you want to have additionally GPIO PWM support in scripts.
//
#define GPIO	  1
#define GPIO_PWM  1

//
// Define this if you want to have ADC support.
//
#define ADC	  1

//
// Define this if you want to have HTTP client support in scripts.
// Define HTTPCS if you want to have additional HTTPS support.
//
#define HTTPC	  1
#define HTTPCS	  1

//
// Define this if you want to have JSON parse support in scripts.
//
#define JSON_PARSE	  1

//
// Define this if you want to have NTP support.
//
#define NTP	  1

//
// Define this if you want to have mDNS support.
//
#define MDNS	  1

//
// Define this if you want to have access the DNS responder.
// Experimental feature - not yet tested
//
#define DNS_RESP  1

//
// Define this to support the "scan" command for AP search
//
#define ALLOW_SCANNING      1

//
// Define this if you want to have access to the config console via TCP.
// Otherwise only local access via serial is possible
//
#define REMOTE_CONFIG      1
#define CONSOLE_SERVER_PORT  7777

//
// Define this to support console backlog
//
#define BACKLOG      1

//
// Size of the console buffers
//
#define MAX_CON_SEND_SIZE    1024
#define MAX_CON_CMD_SIZE     160

//
// Flash save slots (currently max. 0-2)
//
#define SCRIPT_SLOT	0
#define VARS_SLOT	1
#define RETAINED_SLOT	2

#define MAX_RETAINED_LEN 0x1000

typedef enum {SIG_DO_NOTHING=0, SIG_START_SERVER=1, SIG_UART0, SIG_TOPIC_RECEIVED, SIG_SCRIPT_LOADED, SIG_SCRIPT_HTTP_LOADED, SIG_CONSOLE_TX_RAW, SIG_CONSOLE_TX, SIG_CONSOLE_RX} USER_SIGNALS;

#define LOCAL_ACCESS 0x01
#define REMOTE_ACCESS 0x02

#endif /* _USER_CONFIG_ */
