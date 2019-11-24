#include <IOardu.h>

Input button(5);
Output led(13),ledPwm(6);


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:


  int buttonState= button.read(); //for digital Input or
  int buttonStateAn = button.readAN(); //for analog Input


  led.on() // pin 13 HIGH
  led.off() // pin 13 LOW

  led.blink(5, 1);  // blink led 5times for 1sec each time

  ledPwm.smoothOn(5) //ledPwm form 0-255 to 5 secs
  ledPwm.smoothOff(3) // from 255-0 to 3 secs

  ledPwm.onAN(128)  // set value from 0-255 

   ledPwm.off(); //ledPwm LOW

    
 
  
}
