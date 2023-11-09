#include "Joystick.h"

void setup() {
  Serial.begin(9600);
  pinMode(JOYSTICK_Button, INPUT_PULLUP);


}

void loop() {
  Serial.println(getDirection());
  delay(300);
}

