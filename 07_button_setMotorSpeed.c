#pragma config(Sensor, S1,     color,          sensorEV3_Color)
#pragma config(Sensor, S2,     t_right,        sensorEV3_Touch)
#pragma config(Sensor, S3,     t_left,         sensorEV3_Touch)
#pragma config(Sensor, S4,     sonic,          sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          m_neck,        tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          m_right,       tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          m_left,        tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void atoMoveTime(int rightM, int leftM, int pwr, int dur)
{
	setMotorSpeed(m_right, pwr);
	setMotorSpeed(m_left, pwr);
	sleep(dur);
	setMotorSpeed(m_right, 0);
	setMotorSpeed(m_left, 0);
}

task main()
{
	int num = 0;

	while(true)
	{
		if (getButtonPress(buttonUp) == 1)  {num += 1;}
		sleep(100);

		if (getButtonPress(buttonDown) == 1){num -= 1;}
		sleep(100);

		displayCenteredBigTextLine(3, "%d", num);

		if (getButtonPress(buttonEnter) == 1)
		{
			atoMoveTime(m_right, m_left, num, 1000);
		}
	}
}
