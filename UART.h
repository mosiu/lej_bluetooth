/*
 * UART.h
 *
 * Created: 2016-10-02 21:29:12
 *  Author: Mosiu
 */ 


#ifndef UART_H_
#define UART_H_

#include <avr/io.h>

void UART_init();

uint8_t UART_get_RX(void);

void UART_set_TX(uint8_t arg);




#endif /* UART_H_ */