 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_REG.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver Registers
 *
 * Author: Moustafa Ahmed
 ******************************************************************************/

#ifndef PORT_REGS_H
#define PORT_REGS_H

#include "Std_Types.h"

/* SYSCTL which is responsible for Enable GPIO gate CLOCK */
#define SYSCTL_REGCGC2_REG        (*((volatile uint32 *)0x400FE108))

/* Base Address for each port */
#define GPIO_PORTA_BASE_ADDRESS       (*((volatile uint32 *)0x40004000))
#define GPIO_PORTB_BASE_ADDRESS       (*((volatile uint32 *)0x40005000))
#define GPIO_PORTC_BASE_ADDRESS       (*((volatile uint32 *)0x40006000))
#define GPIO_PORTD_BASE_ADDRESS       (*((volatile uint32 *)0x40007000))
#define GPIO_PORTE_BASE_ADDRESS       (*((volatile uint32 *)0x40024000))
#define GPIO_PORTF_BASE_ADDRESS       (*((volatile uint32 *)0x40025000))

/* GPIO Registers offset Address */
#define PORT_DATA_REG_OFFSET           0x3FC         
#define PORT_DIR_REG_OFFSET            0x400
#define PORT_AFSEL_REG_OFFSET          0x420
#define PORT_PUR_REG_OFFSET            0x510
#define PORT_PDR_REG_OFFSET            0x514
#define PORT_DEN_REG_OFFSET            0x51C
#define PORT_LOCK_REG_OFFSET           0x520
#define PORT_CR_REG_OFFSET             0x524
#define PORT_AMSEL_REG_OFFSET          0x528
#define PORT_PCTL_REG_OFFSET           0x52C
#define PORT_OPEN_DRAIN                0x50C
/**                              END                                       **/
#endif /* PORT_REGS_H */
