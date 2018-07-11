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
ato_init();

	while(true)
		{
			for(int i=0; i<TOT_IMG; i++)
			{
				ato_drawImgWithSnd(i);
			}
			for(int i=TOT_IMG-2; i>0; i--)
			{
				ato_drawImgWithSnd(i);
			}
		}


	ato_waitForExit();


}
