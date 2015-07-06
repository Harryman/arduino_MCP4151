/*
  Code for using a Microchip 4131 chip.
  Since the MOSI and MISO are combined on chip, the read
  function is currently not working
*/
#include "Arduino.h"
#include <SPI.h>

#ifndef MCP4151_h
#define MCP4151_h

class MCP4151
{
	private:
  int _chipSelectPin;
int _max;
  
  public:
		MCP4151(int chipSelectPin);
		void write(int value);
};
#endif