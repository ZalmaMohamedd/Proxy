/*
 * DIO_Cfg.c
 *
 *  Created on: Mar 23, 2022
 *      Author: moham
 */

#include "DIO_Cfg.h"

const DIO_ChannelConfigType DIO_ConfigParam[DIO_NUM_OF_CHANNELS] =
{/*INPUT*/
    {/*Channel-0*/
     0,
     0,
     0,
     1,
	 0
    },
    {/*channel -1*/
     0,
     1,
     0,
     1,
	 0
    },
    {/*channel -2*/
     0,
     3,
     0,
     1,
	 0
    },
    {/*channel -3*/
     0,
     4,
     0,
     1,
	 0
    },/*OUTPUT*/
    {/*channel -4*/
     0,
     5,
     1,
     0,
	 0
    },
	{/*channel -5*/
	     0,
	     6,
	     1,
	     0,
		 0
     },
	 {/*channel -6*/
	 	     0,
	 	     7,
	 	     1,
	 	     0,
	 		 0
	 },
	 {/*channel -7*/
	 	     0,
	 	     8,
	 	     1,
	 	     0,
	 		 0
	      },
};

const ChannelGroupType ChannelConfig[NUM_OF_Groups] =
{
    {/*Group-0*/
     4,
	 {4,5,6,7},
    },
	{/*Group-1*/
	  4,
	  {0,1,2,3},
    },
};

