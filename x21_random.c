#define Input_Size	2

int a[Input_Size];

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
		}

		displayTextLine(3, "%d                    %d", a[0], a[1]);

		waitForButtonPress();  // 1st time OK but 2nd time error

		if(getButtonPress(buttonEnter) == true)
		{
			displayCenteredTextLine(7, "%d", a[0] + a[1]);
			sleep(1000);
		}

		flushButtonMessages();
	}
}
