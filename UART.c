/*
 * UART.c
 *
 * Created: 2016-10-02 21:28:55
 *  Author: Mosiu
 */ 

#include "UART.h"

#define UART_PORT	PORTD
#define UART_PIN	PIND
#define UART_DDR	DDRD
#define RX_MASK	(1<<PD0)
#define TX_MASK	(1<<PD1)

void UART_init()
{
	UART_DDR |= TX_MASK;
	UART_DDR &= ~RX_MASK;
	// activate pull-up
	UART_PORT |= (RX_MASK | TX_MASK);
}

uint8_t UART_get_RX(void)
{
	return (UART_PIN & RX_MASK);
}

void UART_set_TX(uint8_t arg)
{
	if (arg)
	{
		UART_PORT |= TX_MASK;
	}
	else
	{
		UART_PORT &= ~TX_MASK;
	}
}
