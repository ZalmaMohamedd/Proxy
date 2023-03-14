/*
 * DIO.h
 *
 *  Created on: Mar 23, 2022
 *      Author: moham
 */

#ifndef INC_DIO_H_
#define INC_DIO_H_
unsigned char value;


#define inputGroup ((unsigned char)1)
#define outputGroup ((unsigned char)0)

void DIO_Init(void);
void DIO_ChannelWrite(unsigned char ChannelId, unsigned char Data);
void DIO_ChannelRead(unsigned char ChannelId, unsigned char *DataPtr);


void GroupChannelWrite(unsigned char GroupId,unsigned char group_data[]);
void DIO_ChannelGroupRead(unsigned char ChannelId,unsigned char group_data[]);
void DIO_ToggleWrite(unsigned char ChannelId, unsigned char Data);
void ChannelToggleWrite(unsigned char GroupId, unsigned char Data);
#endif /* INC_DIO_H_ */
