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
	int idx = 0;

	while(true)
	{
		ato_drawImgWithSnd(idx);		//after 1st cycle then index 3 error
		if(idx == TOT_IMG-1)
		{
				delta *= -1;
		}
		idx += delta;
	}

	ato_waitForExit();
}
