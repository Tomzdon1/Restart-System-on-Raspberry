#include <stdio.h>
#include<wiringPi.h>

const int butPin=17; 
const int pinLed=18;
int main() {

wiringPiSetupGpio();
pinMode(pinLed, OUTPUT);
pinMode(butPin,INPUT);
while(1){
 	if(digitalRead(butPin)){
  	digitalWrite(pinLed, HIGH);
}else{
system("reboot now");
}
}
  return 0;
}
