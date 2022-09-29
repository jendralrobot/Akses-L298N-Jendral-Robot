/***
Akses L298N
by Jendral Robot
https://jendralrobot.blogspot.com/
***/
#define ena 10
#define in1 9
#define in2 8
#define in3 7
#define in4 6
#define enb 5

void setup()
{
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop()
{
  analogWrite(ena, 255); // Rentang pwm 0 - 255
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enb, 255); // Rentang pwm 0 - 255
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
