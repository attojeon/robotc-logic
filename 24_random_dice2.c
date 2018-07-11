#define cnt 120
#define dice 6

int arrDice[cnt];
int atoBank[dice]; //start index -> atoBank[0]
int au_getInt()
{
	int ret = abs(rand() % 6 + 1 );
	ret == 0 ? ret++ : ret;
	return ret;
}

int void getDice()
{
	for(int i = 0; i < cnt; i++)
	{
		arrDice[i] = au_getInt();
		sleep(200);
		atoBank[arrDice[i]-1] += 1;
		sleep(200);
		//displayTextLine(i+1, "%d",arrDice[i]);
		displayTextLine(i+1, "%d    %d",arrDice[i], atoBank[arrDice[i]-1]);
		sleep(1000);
	}
	sleep(3000);
}

task main()
{
	getDice();


}//task
