#define MAX_SIZE	100

int au_getInt()
	{
		int ret = abs(rand() % 100 + 1);
		ret == 0 ? ret++ : ret;
		return ret;
	}

/*
void ato_bubble()
{
	int tmp = 0;

	for(int i = 0; i < MAX_SIZE; i++)
	{
		for(int j = 0; j < MAX_SIZE - (i+1); j++)
		{
			if(atoList[j] > atoList[j+1])
			{
				tmp = atoList[j];
				atoList[j] = atoList[j+1];
				atoList[j+1] = tmp;
			}
		}
	}
}
*/

task main()
{
	int atoList[MAX_SIZE];

	for(int i = 0; i < MAX_SIZE; i++)
	{
		atoList[i] = au_getInt();

		displayTextLine(i+1, "%d", atoList[i]);
	}
	sleep(2000);
	eraseDisplay();

	sleep(2000);



	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			displayStringAt((j+1)*15, (i+1)*10, "%d", atoList[10*i+j]);
		}
	}
		sleep(5000);


	//	ato_bubble();
	int tmp = 0;

	for(int i = 0; i < MAX_SIZE; i++)
	{
		for(int j = 0; j < MAX_SIZE - (i+1); j++)
		{
			if(atoList[j] > atoList[j+1])
			{
				tmp = atoList[j];
				atoList[j] = atoList[j+1];
				atoList[j+1] = tmp;
			}
		}
	}



	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			displayStringAt((j+1)*15, (i+1)*10, "%d", atoList[10*i+j]);
		}
	}
		sleep(5000);

}//task
