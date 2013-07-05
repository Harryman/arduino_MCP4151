/*
  Code for using a Microchip 4131 chip.
  Since the MOSI and MISO are combined on chip, the read
  function is currently not working
*/
#include "Arduino.h"
#include <SPI.h>

#ifndef MCP4131_h
#define MCP4131_h

class MCP4131
{
	private:
  int _chipSelectPin;
int _max;
  
  public:
		MCP4131(int chipSelectPin);
		void write(int value);
};
#endif