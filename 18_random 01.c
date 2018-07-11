#define MAN true
#define WAMAN false

int k;
int r;

int au_getInt()
{
	int ret = abs(rand()/320);
	ret == 0? ret++ : ret;
	return ret;
}

int au_getManOrWaman()
{
	k = au_getInt();
	if(k > 50)
		return 1;
	else
		return 0;
}

task main()
{
//	int r =	au_getInt();
//	displayBigTextLine(3, "%d", r);
//	sleep(3000);

	r = au_getManOrWaman();


	displayBigTextLine(3, "%d", k);
	sleep(3000);
	displayBigTextLine(3, "%d", r);
	sleep(3000);

	//displayInverseTextLine(3, "%d", k);
	//sleep(3000);
}
