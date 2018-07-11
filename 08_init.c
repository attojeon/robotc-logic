#pragma config(Sensor, S1,     color,          sensorEV3_Color)
#pragma config(Sensor, S2,     t_right,        sensorEV3_Touch)
#pragma config(Sensor, S3,     t_left,         sensorEV3_Touch)
#pragma config(Sensor, S4,     sonic,          sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          m_neck,        tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          m_right,       tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          m_left,        tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void ato_init()
{
	displayCenteredTextLine(5, "Press any button!");
	waitForButtonPress();
}

void ato_waitForExit()
{
	flushButtonMessages();
	waitForButtonPress();
}

task main()
{
	ato_init();

	drawBmpfile(0,127,"Big smile");
	sleep(2000);
	drawBmpfile(0,127,"Black eye");
	sleep(2000);

	ato_waitForExit();
}
