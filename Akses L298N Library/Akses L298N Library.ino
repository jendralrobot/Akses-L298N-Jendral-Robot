/***
Akses L298N
by Jendral Robot
https://jendralrobot.blogspot.com/
***/

#include <L298N.h>

// Pin L298N to Arduino Uno
const unsigned int ENA = 10;
const unsigned int IN1 = 9;
const unsigned int IN2 = 8;
const unsigned int IN3 = 7;
const unsigned int IN4 = 6;
const unsigned int ENB = 5;

L298N motorA(ENA, IN1, IN2);
L298N motorB(ENB, IN3, IN4);

void setup()
{
  Serial.begin(9600);
  motorA.setSpeed(255); // Atur kecepatan motor A : 0 - 255
  motorB.setSpeed(255); // Atur kecepatan motor B : 0 - 255
}

void loop()
{
  motorA.forward(); // Motor A Maju
  motorB.forward(); // Motor B Maju  

  // Alternative method:
  // motorA.run(L298N::FORWARD);
  // motorB.run(L298N::FORWARD);

  delay(3000);

  motorA.stop(); // Motor A berhenti
  motorB.stop(); // Motor B berhenti

  // Alternative method:
  // motorA.run(L298N::STOP);
  // motorB.run(L298N::STOP);

  delay(3000);

  // Tell the motor to go back (may depend by your wiring)
  motorA.backward(); // Motor A Mundur
  motorB.backward(); // Motor B Mundur

  // Alternative method:
  // motor.run(L298N::BACKWARD);

  delay(3000);

  motorA.stop(); // Motor A berhenti
  motorB.stop(); // Motor B berhenti

  delay(3000);
}