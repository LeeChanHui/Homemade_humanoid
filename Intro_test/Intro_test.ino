#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver LegBoard = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver ArmBoard = Adafruit_PWMServoDriver(0x41);

int pos = 0;

void setup() {
  Serial.begin(9600);

  LegBoard.begin();
  LegBoard.setPWMFreq(50);

  ArmBoard.begin();
  ArmBoard.setPWMFreq(50);
}

void loop() {
  if (Serial.available() > 0)
  {
    pos = Serial.parseInt();
  }

  LegBoard.setPWM(0, 0, pos);   // setPWM(pin, start_HIGH, end_HIGH);  ex) ID_01 --> LegBoard_pin00     ID_13 --> ArmBoard_pin02
  Serial.println(pos);
}
