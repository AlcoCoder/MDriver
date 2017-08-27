#ifndef Ultrasonic_h
#define Ultrasonic_h

#define MAX 255

class MDriver
{
public:
	MDriver(uint8_t EN, uint8_t IN1, uint8_t IN2);
	MDriver(uint8_t IN1, uint8_t IN2);

	void speed(uint8_t speed);
	void forward();
	void backward();
	void stop();

private:
	bool _pwm;
	uint8_t _en;
	uint8_t _in1;
	uint8_t _in2;
	uint8_t _speed;
};

#endif
