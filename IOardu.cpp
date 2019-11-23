#include "IOardu.h"
#include "Arduino.h"



Input::Input(int pin)
{
	
	pinIn = pin;
	pinMode(pinIn, INPUT);

	
}

Output::Output(int pin)
{
	pinOut = pin;
	pinMode(pinOut, OUTPUT);
}

int Input::read()
{
	value = digitalRead(pinIn);
	return value;
}

int Input::readAN()
{
	value = analogRead(pinIn);
	return value;
}

void Output::on()
{

	digitalWrite(pinOut, HIGH);


}
void Output::off()
{
	digitalWrite(pinOut, LOW);
}

void Output::onNL()
{
	digitalWrite(pinOut, LOW);
}

void Output::offNL()
{
	digitalWrite(pinOut, HIGH);
}



void Output::blink(int times, float delays)
{
	int delayms = delays * 1000;
	for (int i = 0; i < times; i++)
	{
		digitalWrite(pinOut, HIGH);
		delay(delayms);
		digitalWrite(pinOut, LOW);
		delay(delayms);

	}

}

void Output::onAN(int val)
{
	analogWrite(pinOut, val);
}

void Output::smoothOn(float xr)
{
	xr = xr * 1000;

	for (int i = 0; i <= 255; i++)
	{
		analogWrite(pinOut, i);
		delay(xr / 255);
	}
}

void Output::smoothOff(float xr)
{
	xr = xr * 1000;
	for (int i = 255; i >= 0; i--)
	{
		analogWrite(pinOut,i);
		delay(xr / 255);
	}

}



