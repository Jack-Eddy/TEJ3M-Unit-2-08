/*
 * Created by: Jack Eddy
 * Created on: April 2025
 *
 * This program turns a servo motor from 0 to 90 degrees and repeats
*/

#include <Servo.h>

// constants
const int PIN_2 = 2;
const int DEGREE_CONVERSION = 5.6833;

// variables
int servoAngle = 0;
int potentiometerValue = 0;

Servo servoNumber1;

void setup() {
    // setup servo pins
    servoNumber1.attach(PIN_2);
    servoNumber1.write(servoAngle);
}

void loop() {
    potentiometerValue = analogRead(A0);                  
    servoAngle = potentiometerValue/DEGREE_CONVERSION; // convert potentiometer value to angle within 180 degrees
    servoNumber1.write(servoAngle);
}
