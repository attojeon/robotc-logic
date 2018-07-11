#pragma config(Sensor, S1,     color,          sensorEV3_Color)
#pragma config(Sensor, S2,     t_right,        sensorEV3_Touch)
#pragma config(Sensor, S3,     t_left,         sensorEV3_Touch)
#pragma config(Sensor, S4,     sonic,          sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          m_neck,        tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          m_right,       tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          m_left,        tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int num = 0;

	while(true)
	{
		if (getButtonPress(buttonUp) == 1)
		{
			playTone(1000, 20);
			num += 1;
		}
		sleep(100);

		if (getButtonPress(buttonDown) == 1)
		{
			playTone(400, 20);
			num -= 1;
		}
		sleep(100);

		displayCenteredBigTextLine(3, "%d", num);
	}

}
