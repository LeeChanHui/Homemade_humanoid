#define ID_01_0_PWM 110
#define ID_01_180_PWM 520
#define ID_02_0_PWM 110
#define ID_02_180_PWM 520
#define ID_03_0_PWM 75
#define ID_03_180_PWM 510
#define ID_04_0_PWM 75
#define ID_04_130_PWM 410
#define ID_05_0_PWM 100
#define ID_05_180_PWM 520
#define ID_06_0_PWM 110
#define ID_06_180_PWM 510
#define ID_07_0_PWM 90
#define ID_07_180_PWM 510
#define ID_08_0_PWM 105
#define ID_08_180_PWM 510
#define ID_09_0_PWM 225
#define ID_09_130_PWM 530
#define ID_10_0_PWM 100
#define ID_10_180_PWM 515

#define ID_11_0_PWM 85
#define ID_11_180_PWM 510
#define ID_12_0_PWM 75
#define ID_12_140_PWM 410
#define ID_13_0_PWM 90
#define ID_13_180_PWM 520
#define ID_14_0_PWM 120
#define ID_14_180_PWM 530
#define ID_15_0_PWM 180
#define ID_15_90_PWM 415
#define ID_16_0_PWM 110
#define ID_16_180_PWM 525
#define ID_17_0_PWM 220
#define ID_17_140_PWM 545
#define ID_18_0_PWM 85
#define ID_18_180_PWM 495
#define ID_19_0_PWM 90
#define ID_19_180_PWM 505
#define ID_20_0_PWM 180
#define ID_20_90_PWM 420

char current_angle_ID_01 = 90;
char current_angle_ID_02 = 50;
char current_angle_ID_03 = 40;
char current_angle_ID_04 = 95;
char current_angle_ID_05 = 90;
char current_angle_ID_06 = 90;
char current_angle_ID_07 = 130;
char current_angle_ID_08 = 140;
char current_angle_ID_09 = 35;
char current_angle_ID_10 = 90;

char current_angle_ID_11 = 100;
char current_angle_ID_12 = 100;
char current_angle_ID_13 = 90;
char current_angle_ID_14 = 140;
char current_angle_ID_15 = 45;
char current_angle_ID_16 = 80;
char current_angle_ID_17 = 40;
char current_angle_ID_18 = 90;
char current_angle_ID_19 = 50;
char current_angle_ID_20 = 45;

String myString = "";
unsigned char index01 = 0, index02 = 0, index03 = 0, index04 = 0, index05 = 0, index06 = 0, index07 = 0, index08 = 0, index09 = 0, index10 = 0;

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver LegBoard = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver ArmBoard = Adafruit_PWMServoDriver(0x41);

void legAngle(unsigned char angle_ID_01, unsigned char angle_ID_02, unsigned char angle_ID_03, unsigned char angle_ID_04, unsigned char angle_ID_05, unsigned char angle_ID_06, unsigned char angle_ID_07, unsigned char angle_ID_08, unsigned char angle_ID_09, unsigned char angle_ID_10) {
  //changing Angle to PWM
  unsigned short pwm_ID_01 = map(constrain(angle_ID_01, 0 , 180), 0, 180, ID_01_0_PWM, ID_01_180_PWM);
  unsigned short pwm_ID_02 = map(constrain(angle_ID_02, 0 , 180), 0, 180, ID_02_0_PWM, ID_02_180_PWM);
  unsigned short pwm_ID_03 = map(constrain(angle_ID_03, 0 , 180), 0, 180, ID_03_0_PWM, ID_03_180_PWM);
  unsigned short pwm_ID_04 = map(constrain(angle_ID_04, 0 , 130), 0, 130, ID_04_0_PWM, ID_04_130_PWM);
  unsigned short pwm_ID_05 = map(constrain(angle_ID_05, 0 , 180), 0, 180, ID_05_0_PWM, ID_05_180_PWM);
  unsigned short pwm_ID_06 = map(constrain(angle_ID_06, 0 , 180), 0, 180, ID_06_0_PWM, ID_06_180_PWM);
  unsigned short pwm_ID_07 = map(constrain(angle_ID_07, 0 , 180), 0, 180, ID_07_0_PWM, ID_07_180_PWM);
  unsigned short pwm_ID_08 = map(constrain(angle_ID_08, 0 , 180), 0, 180, ID_08_0_PWM, ID_08_180_PWM);
  unsigned short pwm_ID_09 = map(constrain(angle_ID_09, 0 , 130), 0, 130, ID_09_0_PWM, ID_09_130_PWM);
  unsigned short pwm_ID_10 = map(constrain(angle_ID_10, 0 , 180), 0, 180, ID_10_0_PWM, ID_10_180_PWM);

  //Writing to Servo
  LegBoard.setPWM(0, 0, pwm_ID_01);
  LegBoard.setPWM(1, 0, pwm_ID_02);
  LegBoard.setPWM(2, 0, pwm_ID_03);
  LegBoard.setPWM(3, 0, pwm_ID_04);
  LegBoard.setPWM(4, 0, pwm_ID_05);
  LegBoard.setPWM(5, 0, pwm_ID_06);
  LegBoard.setPWM(6, 0, pwm_ID_07);
  LegBoard.setPWM(7, 0, pwm_ID_08);
  LegBoard.setPWM(8, 0, pwm_ID_09);
  LegBoard.setPWM(9, 0, pwm_ID_10);
}

void armAngle(unsigned char angle_ID_11, unsigned char angle_ID_12, unsigned char angle_ID_13, unsigned char angle_ID_14, unsigned char angle_ID_15, unsigned char angle_ID_16, unsigned char angle_ID_17, unsigned char angle_ID_18, unsigned char angle_ID_19, unsigned char angle_ID_20) {
  //changing Angle to PWM
  unsigned short pwm_ID_11 = map(constrain(angle_ID_11, 0 , 180), 0, 180, ID_11_0_PWM, ID_11_180_PWM);
  unsigned short pwm_ID_12 = map(constrain(angle_ID_12, 0 , 140), 0, 140, ID_12_0_PWM, ID_12_140_PWM);
  unsigned short pwm_ID_13 = map(constrain(angle_ID_13, 0 , 180), 0, 180, ID_13_0_PWM, ID_13_180_PWM);
  unsigned short pwm_ID_14 = map(constrain(angle_ID_14, 0 , 180), 0, 180, ID_14_0_PWM, ID_14_180_PWM);
  unsigned short pwm_ID_15 = map(constrain(angle_ID_15, 0 , 90), 0, 90, ID_15_0_PWM, ID_15_90_PWM);
  unsigned short pwm_ID_16 = map(constrain(angle_ID_16, 0 , 180), 0, 180, ID_16_0_PWM, ID_16_180_PWM);
  unsigned short pwm_ID_17 = map(constrain(angle_ID_17, 0 , 140), 0, 140, ID_17_0_PWM, ID_17_140_PWM);
  unsigned short pwm_ID_18 = map(constrain(angle_ID_18, 0 , 180), 0, 180, ID_18_0_PWM, ID_18_180_PWM);
  unsigned short pwm_ID_19 = map(constrain(angle_ID_19, 0 , 180), 0, 180, ID_19_0_PWM, ID_19_180_PWM);
  unsigned short pwm_ID_20 = map(constrain(angle_ID_20, 0 , 90), 0, 90, ID_20_0_PWM, ID_20_90_PWM);

  //Writing to Servo
  ArmBoard.setPWM(0, 0, pwm_ID_11);
  ArmBoard.setPWM(1, 0, pwm_ID_12);
  ArmBoard.setPWM(2, 0, pwm_ID_13);
  ArmBoard.setPWM(3, 0, pwm_ID_14);
  ArmBoard.setPWM(4, 0, pwm_ID_15);
  ArmBoard.setPWM(5, 0, pwm_ID_16);
  ArmBoard.setPWM(6, 0, pwm_ID_17);
  ArmBoard.setPWM(7, 0, pwm_ID_18);
  ArmBoard.setPWM(8, 0, pwm_ID_19);
  ArmBoard.setPWM(9, 0, pwm_ID_20);
}

void disableServo() {
  LegBoard.setPWM(0, 0, 0);
  LegBoard.setPWM(1, 0, 0);
  LegBoard.setPWM(2, 0, 0);
  LegBoard.setPWM(3, 0, 0);
  LegBoard.setPWM(4, 0, 0);
  LegBoard.setPWM(5, 0, 0);
  LegBoard.setPWM(6, 0, 0);
  LegBoard.setPWM(7, 0, 0);
  LegBoard.setPWM(8, 0, 0);
  LegBoard.setPWM(9, 0, 0);

  ArmBoard.setPWM(0, 0, 0);
  ArmBoard.setPWM(1, 0, 0);
  ArmBoard.setPWM(2, 0, 0);
  ArmBoard.setPWM(3, 0, 0);
  ArmBoard.setPWM(4, 0, 0);
  ArmBoard.setPWM(5, 0, 0);
  ArmBoard.setPWM(6, 0, 0);
  ArmBoard.setPWM(7, 0, 0);
  ArmBoard.setPWM(8, 0, 0);
  ArmBoard.setPWM(9, 0, 0);
}

void setup()
{
  Serial.begin(9600);

  LegBoard.begin();
  LegBoard.setPWMFreq(50);

  ArmBoard.begin();
  ArmBoard.setPWMFreq(50);
}

void loop()
{
  if (Serial.available() > 0) {
    myString = Serial.readStringUntil(';');
    if (myString != "") {
      if (myString.charAt(0) == '<') {
        index01 = myString.indexOf(",");
        index02 = myString.indexOf(",", index01 + 1);
        index03 = myString.indexOf(",", index02 + 1);
        index04 = myString.indexOf(",", index03 + 1);
        index05 = myString.indexOf(",", index04 + 1);
        index06 = myString.indexOf(",", index05 + 1);
        index07 = myString.indexOf(",", index06 + 1);
        index08 = myString.indexOf(",", index07 + 1);
        index09 = myString.indexOf(",", index08 + 1);
        index10 = myString.indexOf(">", index09 + 1);

        current_angle_ID_01 = myString.substring(1, index01).toInt();
        current_angle_ID_02 = myString.substring(index01 + 1, index02).toInt();
        current_angle_ID_03 = myString.substring(index02 + 1, index03).toInt();
        current_angle_ID_04 = myString.substring(index03 + 1, index04).toInt();
        current_angle_ID_05 = myString.substring(index04 + 1, index05).toInt();
        current_angle_ID_06 = myString.substring(index05 + 1, index06).toInt();
        current_angle_ID_07 = myString.substring(index06 + 1, index07).toInt();
        current_angle_ID_08 = myString.substring(index07 + 1, index08).toInt();
        current_angle_ID_09 = myString.substring(index08 + 1, index09).toInt();
        current_angle_ID_10 = myString.substring(index09 + 1, index10).toInt();
      }
      else if (myString.charAt(0) == '[') {
        index01 = myString.indexOf(",");
        index02 = myString.indexOf(",", index01 + 1);
        index03 = myString.indexOf(",", index02 + 1);
        index04 = myString.indexOf(",", index03 + 1);
        index05 = myString.indexOf(",", index04 + 1);
        index06 = myString.indexOf(",", index05 + 1);
        index07 = myString.indexOf(",", index06 + 1);
        index08 = myString.indexOf(",", index07 + 1);
        index09 = myString.indexOf(",", index08 + 1);
        index10 = myString.indexOf("]", index09 + 1);

        current_angle_ID_11 = myString.substring(1, index01).toInt();
        current_angle_ID_12 = myString.substring(index01 + 1, index02).toInt();
        current_angle_ID_13 = myString.substring(index02 + 1, index03).toInt();
        current_angle_ID_14 = myString.substring(index03 + 1, index04).toInt();
        current_angle_ID_15 = myString.substring(index04 + 1, index05).toInt();
        current_angle_ID_16 = myString.substring(index05 + 1, index06).toInt();
        current_angle_ID_17 = myString.substring(index06 + 1, index07).toInt();
        current_angle_ID_18 = myString.substring(index07 + 1, index08).toInt();
        current_angle_ID_19 = myString.substring(index08 + 1, index09).toInt();
        current_angle_ID_10 = myString.substring(index09 + 1, index10).toInt();
      }
    }
  }
  legAngle(current_angle_ID_01, current_angle_ID_02, current_angle_ID_03, current_angle_ID_04, current_angle_ID_05, current_angle_ID_06, current_angle_ID_07, current_angle_ID_08, current_angle_ID_09, current_angle_ID_10);
  armAngle(current_angle_ID_11, current_angle_ID_12, current_angle_ID_13, current_angle_ID_14, current_angle_ID_15, current_angle_ID_16, current_angle_ID_17, current_angle_ID_18, current_angle_ID_19, current_angle_ID_20);
}
