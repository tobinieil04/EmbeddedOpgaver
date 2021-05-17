/* 3. FormattedData.cpp
	Print values in various formats to the serial port
*/
#include <Arduino.h>

int led = 11;
int incommingNum = 0;

void setup()
{
	while(!Serial); // Wait until serial port's open on Leonardo and SAMD boards
	Serial.begin(115200);
	pinMode(led, OUTPUT);
	
}

void loop()
{
	
	double del = (incommingNum - 48) * 0.1 * 1000;
	digitalWrite(led, HIGH);
	delay(del);
	digitalWrite(led, LOW);
	delay(del);
	
}

void serialEvent() 
{
	incommingNum = Serial.read();
	if(incommingNum > 9 || incommingNum < 0)
	{
		exit(0);
	}
	else
	{
		
	}
}