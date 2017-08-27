#include "Arduino.h"
#include "MDriver.h"

MDriver::MDriver(uint8_t EN, uint8_t IN1, uint8_t IN2)
{
  _en = EN;
  _in1 = IN1;
  _in2 = IN2;
  _pwm = true;
  pinMode(_en, OUTPUT);
  pinMode(_in1, OUTPUT);
  pinMode(_in2, OUTPUT);
}
MDriver::MDriver(uint8_t IN1, uint8_t IN2)
{
  _in1 = IN1;
  _in2 = IN2;
  _pwm = false;
  pinMode(_in1, OUTPUT);
  pinMode(_in2, OUTPUT);
}
void MDriver::speed(uint8_t speed)
{
  if (_pwm)
  {
    _speed = speed;
  }
}
void MDriver::forward()
{
  analogWrite(_en, _speed);
  digitalWrite(_in1, LOW);
  digitalWrite(_in2, HIGH);
}
void MDriver::backward()
{
  analogWrite(_en, _speed);
  digitalWrite(_in1, HIGH);
  digitalWrite(_in2, LOW);
}
void MDriver::stop()
{
  analogWrite(_en, 0);
}
void MDriver::fast_stop()
{
  digitalWrite(_in1, LOW);
  digitalWrite(_in2, LOW);
}

