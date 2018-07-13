#define PAGE_SIZE 9
#define INPUT_SIZE 72

int page = 1;
int startIdx = 0;
int dan = 1;
bool delta = false;


void ato_waitForExit()
{
	flushButtonMessages();
	waitForButtonPress();
}

task main()
{
	displayCenteredBigTextLine(3, "<< %d DAN >>", dan); //fail

	while(true)
	{
		eraseDisplay();
		if(getButtonPress(buttonLeft) == true)
		{
			dan--;
			if(dan < 1) dan = 1;
			displayCenteredBigTextLine(3, "<< %d DAN >>", dan);
		}
		if(getButtonPress(buttonRight) == true)
		{
			dan++;
			if(dan > 9) dan = 9;
			displayCenteredBigTextLine(3, "<< %d DAN >>", dan);
		}

		if(getButtonPress(buttonEnter) == true)
		{
			if (delta == false)
			{
				for(int j = 1; j <= 9; j++)
				{
					//displayTextLine(j, "%d X %d = %d", (dan, j, dan * j);
					displayStringAt(40, j*10, "%d X %d = %d", (dan, j, dan * j); //fail
				}
				delta = true;
			}
			else
			{
				displayCenteredBigTextLine(3, "<< %d DAN >>", dan);
				delta = false;
			}

		}

		sleep(1000);
		flushButtonMessages();

		ato_waitForExit();
	}


}
