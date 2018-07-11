#define TOT_IMG 5
string imgList[] = {"Dial 0","Dial 1","Dial 2","Dial 3","Dial 4"};

void ato_init()
{
	displayCenteredTextLine(5, "Press any button!");
	waitForButtonPress();
}

void ato_waitForExit()
{
	flushButtonMessages(); // I dont
	waitForButtonPress();
}

void ato_drawImgWithSnd(int idx)
{
	drawBmpfile(0, 127, imgList[idx]);
	displayInverseTextLine(15, imgList[idx]);
	playSound(soundBeepBeep);
	sleep(1000);
}

task main()
{
	setSoundVolume(10);
	ato_init();
	 int delta = 1;


	while(true)
	{
		for(int i=1; i<TOT_IMG; i++)
		{
			ato_drawImgWithSnd((i-1));		//after 1st cycle then index 3 error
			if(i == TOT_IMG-1)
			{
				 delta *= -1;
			}
		}
		for(int i=1; i<TOT_IMG; i++)
		{
			ato_drawImgWithSnd((i-TOT_IMG)*delta); // (TOT_IMG-i)*delta)--> fail
		}
	}

	ato_waitForExit();
}
