
void ato_waitForExit()
{
	flushButtonMessages(); // I dont
	waitForButtonPress();
}

int ato_getYear()
{
	int year = abs(rand() % 2000 + 1 );
	year == 0 ? year++ : year;
	return year;
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

int temp;

task main()
{
	for(int i =0; i < 16; i++)
	{
		temp = ato_getYear();
		ato_isLeapYear(temp);
		displayTextLine(i+1, "%d     %d", temp, ato_isLeapYear(temp));
		sleep(1000);
	}

	ato_waitForExit();
}
