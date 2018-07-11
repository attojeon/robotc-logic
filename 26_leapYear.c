#define PAGE_SIZE 15
#define INPUT_SIZE 100

int cnt = 0;
int xYear = 1901;
int arrYear[100];
int page = 1;
int startIdx = 0;

void ato_waitForExit()
{
	flushButtonMessages(); // I dont
	waitForButtonPress();
}

bool ato_isLeapYear(int whatyear)
{
	if(whatyear%4 == 0)
	{
		if(whatyear%100 == 0)
		{
			if(whatyear%400 == 0)
			{
				return true;
			}
			return false;
		}
		return true;
	}
	return false;
}

void int ato_pritYear()
{
	while (cnt < 100)
	{
		if(ato_isLeapYear(xYear) == true)
		{
			arrYear[cnt] = xYear;
			cnt += 1;
		}
		xYear += 1;
	}
}

task main()
{
	ato_pritYear();

	while (true)
	{
		eraseDisplay();
		startIdx = PAGE_SIZE * (page - 1);

		for(int i=0; i<PAGE_SIZE; i++)
		{
			displayTextLine(i, "%d   %d", startIdx + i, arrYear[i]);
		}

		displayInverseStringAt(20, 8, "%d / %d", page, INPUT_SIZE / PAGE_SIZE);

		if(getButtonPress(buttonLeft) == true) page--;
		if(getButtonPress(buttonRight) == true) page++;
		if(page < 1) page = 1;
		if(page > INPUT_SIZE/PAGE_SIZE)
			 page = INPUT_SIZE/PAGE_SIZE;

		sleep(200);
		flushButtonMessages();
	}

	ato_waitForExit();
}
