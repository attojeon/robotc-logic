#define PAGE_SIZE	10
#define Input_Size	100

int a[Input_Size];
int page = 1;

int au_getInt()
{
	int ret = abs(rand() % 100 + 1);
	ret == 0 ? ret++ : ret;
	return ret;
}

task main()
{
	int startIdx = 0;

	for(int i = 0; i < Input_Size; i++)
	{
		a[i] = au_getInt();
	}

	while(true)
  {
  	startIdx = PAGE_SIZE * (page - 1);


		for(int j = 0; j < PAGE_SIZE; j++)
		{
			displayCenteredTextLine(j, "%d", a[j+startIdx]);
			//sleep(200);
		}
		displayInverseBigStringAt(20, 8, "%d / %d", page, Input_Size / PAGE_SIZE );



		if(getButtonPress(buttonLeft) == true) page--;
		if(getButtonPress(buttonRight) == true) page++;
		if(page < 1) page = 1;
		if(page > Input_Size / PAGE_SIZE) page = Input_Size / PAGE_SIZE;


	sleep(200);
	flushButtonMessages();
}

}//task
