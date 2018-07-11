#define TOT_IMG 5
string imgList[] = {"Dial 0","Dial 1","Dial 2","Dial 3","Dial 4"};

void ato_drawImgWithSnd(int idx)
{
	drawBmpfile(0, 127, imgList[idx]);
	sleep(1000);
}

task main()
{
	int delta = 1;

	while (true)
	{
		for(int i=1; i<=TOT_IMG; i++)
		{
			ato_drawImgWithSnd(i*delta-1);
			if (i == TOT_IMG - 1)
			{
				delta = -1;
				for(int j=1; j<=TOT_IMG; j++)
				{
					ato_drawImgWithSnd(j*delta-1);
				}
				delta = 1;
			}
		}
	}
}
