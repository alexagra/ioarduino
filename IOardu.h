

#ifndef IOardu_h
#define IOardu_h


#include "Arduino.h"

#define wait(x) delay(x*1000);

class Input
{

private:
	int pinIn;
	int value;

public:
	Input(int);
	int read();
	int readAN();
};
class Output
{

private:
	int pinOut;


public:
	Output(int);
	void on();
	void off();
	void blink(int, float);
	void onAN(int);
	void smoothOn(float);
	void smoothOff(float);
	void onNL();
	void offNL();
	

	

};
#endif
