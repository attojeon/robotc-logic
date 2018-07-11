#define MAN true
#define WAMAN false

int au_getInt()
{
	int ret = abs(rand()/320);
	ret == 0 ? ret++ : ret;
	return ret;
}

bool au_getManOrWaman()
{
	if(au_getInt() > 50)
		return MAN;
	else
	return WAMAN;
}

int countM = 0;
int countW = 0;

task main()
{


	while (true)
	{
		if (au_getManOrWaman() == true)
		{
			countM = countM + 1;
			displayCenteredBigTextLine(5, "%s : %d", "Man", countM);
			sleep(2000);
		}
		else
		{
			displayCenteredBigTextLine(5, "%s : %d", "Waman", countW);
			countW = countW + 1;
			sleep(2000);
		}
		displayTextLine(10, "%d    VS   %d", countM, countW);
		sleep(2000);
	}


}
