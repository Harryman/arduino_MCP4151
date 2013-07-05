#include <SPI.h>
#include "MCP4131.h"

MCP4131::MCP4131(int chipSelectPin)
{
	_chipSelectPin = chipSelectPin;
	_max = 127;
	
	pinMode(_chipSelectPin, OUTPUT);
	digitalWrite(_chipSelectPin, HIGH);
}	

void MCP4131::write(int value)
{
	if (value>_max)
	{
		value = _max;
	}
	else if (value < 0)
	{
		value = 0;
	}
		
  digitalWrite(_chipSelectPin, LOW);
//delay(250);
  int command = B00000000;

  int result1;
  int result2;

  
  result1 = SPI.transfer(command);
  result2 = SPI.transfer(value);

  digitalWrite(_chipSelectPin, HIGH); 
  
}

