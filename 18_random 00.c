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

bool ck;

task main()
{
	ck = au_getManOrWaman();
	if (ck == true)
	{
		displayCenteredBigTextLine(5, "%s", "Man");
	}
	else
	{
		displayCenteredBigTextLine(5, "%s", "WaMan");
	}
	sleep(2000);


}
