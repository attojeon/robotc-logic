#define cnt 10

int arrDice[cnt];
//string imgList[] = {"dice1","dice2","dice3","dice4","dice5","dice6"}; //-> img loading fail
string imgList[] = {"Dial 0","Dial 1","Dial 2","Dial 3","Dial 4", "Dial 4"}; //Dial 5 img no exist

int au_getInt()
{
	int ret = abs(rand() % 6 + 1);
	ret == 0 ? ret++ : ret;
	return ret;
}

int void getDice()
{
	for(int i = 0; i < cnt; i++)
	{
		arrDice[i] = au_getInt();
		displayTextLine(i, "%d",arrDice[i]);
		sleep(2000);
		drawBmpfile(0,127,imgList[arrDice[i]-1]);
		sleep(2000);
	}
}

task main()
{
	getDice();


}//task
