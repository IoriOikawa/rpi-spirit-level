#include "rpi.h"

int main(void)
{
	rpi_initialize();
	while (1)
	{
		rpi_step();
	}
	rpi_terminate();
}
