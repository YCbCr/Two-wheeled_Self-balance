#ifndef _USART2_H
#define _USART2_H

#include "sys.h"

void USART2_Init(u32 bound);
void USART2_Send_Byte(u8 byte);
void u2_printf(char* fmt,...) ;
void niming (int data1,int data2,int data3);
void AnBT_Uart1_Send_Char(unsigned char ascii_code);
void hc04(u8 D1,int D2,int D3);

#endif






















