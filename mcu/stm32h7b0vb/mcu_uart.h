#ifndef __DEV_UART_H__
#define __DEV_UART_H__

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>   

#include "bus_uart.h"


extern s32 mcu_uart_open (McuUartNum comport, BusUartNode *BusNode, const BusUartPra *Pra);
extern s32 mcu_uart_close (McuUartNum comport);
extern s32 mcu_uart_write (McuUartNum comport, u8 *buf, s32 len);
extern s32 mcu_uart_read (McuUartNum comport, u8 *buf, s32 len);
extern s32 mcu_uart_set_baud (McuUartNum comport, s32 baud);
extern s32 mcu_uart_tcflush (McuUartNum comport);
extern void mcu_uart_test(void);

#define mcu_uart_send mcu_uart_write


#endif

