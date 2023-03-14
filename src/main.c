#include "stm32f4xx.h"
#include "DIO.h"

int main(void);
int main(void)
{
	DIO_Init();
	unsigned char buttonsReadings[4];
	while(1)
	{

		DIO_ChannelGroupRead(inputGroup, buttonsReadings);
		GroupChannelWrite(outputGroup,buttonsReadings);
		for(int i =0 ;i< 50000;i++){}

}
}

