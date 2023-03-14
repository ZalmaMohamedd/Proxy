/*
 * DIO_Cfg.h
 *
 *  Created on: Mar 23, 2022
 *      Author: moham
 */

#ifndef INC_DIO_CFG_H_
#define INC_DIO_CFG_H_

unsigned char value;
#define DIO_NUM_OF_CHANNELS ((unsigned char)8)
#define NUM_OF_Groups ((unsigned char)2)


typedef struct
{
    unsigned char PortId;
    unsigned char PinNum;
    unsigned char PortDirection;/*0 = input,1 = output*/
    unsigned char PuPd; /*0 = No pull-up, pull-down,1 up,2 down*/
    unsigned char OutputType;/*0 = push-pull,1 = open drain*/

}DIO_ChannelConfigType;
extern const DIO_ChannelConfigType DIO_ConfigParam[DIO_NUM_OF_CHANNELS];

typedef struct
{
    //unsigned char GroupId; /*group1:Yellowleds Group2:BLue*/
    unsigned char NumOfChannels; /* num of pins */
    unsigned char ChannelIds[4]; /*group1:3,4 Group2:5,6*/
}ChannelGroupType;
extern const ChannelGroupType ChannelConfig[NUM_OF_Groups];

#endif /* INC_DIO_CFG_H_ */
