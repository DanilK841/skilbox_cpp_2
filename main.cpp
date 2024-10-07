#include <Arduino.h>
#include <iostream>

const int led_pin = 39;
bool light_on = false;
// переменная хранит кол-во нажатий
int button_push_number = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(18) == HIGH)
  {
     button_push_number = ++button_push_number ;
     std::cout<<"button number: "<<button_push_number<<std::endl;

     if (button_push_number == 4)
     {
        light_on = true;
     }
     delay(500);
  }

  if(light_on)
  {
    light_on = false;
    button_push_number = 0;
    digitalWrite(led_pin, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(led_pin, LOW);
  }
}

