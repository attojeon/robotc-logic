#pragma config(Sensor, S4,     sonic,          sensorEV3_Ultrasonic)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define Input_Size	10  // for what result easy instead 100

int a[Input_Size];
int k = 0;
int nDist = 0;


int atoRound(float f)
{
	if(f>0) return (int)(f + 0.5);
	else    return (int)(f - 0.5);
}

task main()
{
	while(true)
	{
		for(int i = 0; i < Input_Size; i++)
		{
			nDist = atoRound(getUSDistance(sonic));
			sleep(200);
			a[i] = nDist;
			displayTextLine(i, "%d", a[i]);
			k = k + a[i];
		}

		waitForButtonPress();  // 1st time OK but 2nd time error

		if(getButtonPress(buttonEnter) == true)
		{
			displayInverseString(12, "sum : %d,   avg : %0.2f", k, k/10);
			sleep(1000);
			k = 0;
		}

	}
	flushButtonMessages();
}
