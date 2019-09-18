﻿/*
 * DIO.h
 *
 * Created: 24/08/2015 12:51:11 ص
 *  Author: hossam
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "Basic_Types.h"
#include "Basic_Types.h"


#define PA ( (u8) 0x00)
#define PB ( (u8) 0x01)
#define PC ( (u8) 0x02)
#define PD ( (u8) 0x03)

void DIO_InitPortDirection(u8 PortName,u8 PortDirection,u8 PortMask);
void DIO_WritePort(u8 PortName,u8 PortData,u8 PortMask);
u8 DIO_ReadPort(u8 PortName,u8 PortMAsk);



#endif /* DIO_H_ */
