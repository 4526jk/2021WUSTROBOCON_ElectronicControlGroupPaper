#include <REGX52.H>
#include "iic.h"
void send ()
{
	char ui[]="Hello Robocon";
	char i=0;
	iic_start();
	iic_write_byte(0x10);
	iic_wait_ack();
	
	
	iic_write_byte(0x0A);
	 iic_wait_ack();
	
	for (i=0;i<14;i++)
	{
	iic_write_byte(ui[i]);
	 iic_wait_ack();
	}
	
	iic_stop();
}

