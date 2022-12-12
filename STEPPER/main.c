#include "STD_TYPES.h"
#include "STPPR_interface.h"
#include "PORT_interface.h"


void main ()
{
	PORT_VidInit();
	while (1)
	{	for(u8 i =0 ; i < 255 ; i++)
	{
	STPPR_RotateCW();
	}
	}

}
