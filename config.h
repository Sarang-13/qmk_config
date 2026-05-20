#define USE_SERIAL

#define MASTER_LEFT   //force left half to be the master, later add support to automatically detect the halfs and use any as master
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

#define SERIAL_USART_TX_PIN GP7
#define SERIAL_USART_RX_PIN GP8
#define SERIAL_USART_FULL_DUPLEX
// #define SERIAL_USART_PIN_SWAP

#define SERIAL_USART_SPEED 230400
#define USB_POLLING_INTERVAL_MS 1


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define NKRO_DEFAULT_ON 1


#define DEBOUNCE 3
#define TAPPING_TERM_THUMB 210
