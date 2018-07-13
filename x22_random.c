#define Input_Size	10

int a[Input_Size];
int k = 0;

int au_getInt()
{
	int ret = abs(rand() % 100 + 1);
	ret == 0 ? ret++ : ret;
	return ret;
}

task main()
{
	while(true)
	{
		eraseDisplay();
		
		for(int i = 0; i < Input_Size; i++)
		{
			a[i] = au_getInt();
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

		flushButtonMessages();
	}
	
}
