int i = 2;
int j;
int cnt = 0;
int arrPrime[1000];


int isPrimeNumber(int x)
{
	if(x == 1) return false;
	for(i = 2; i <= x/2; i++)
	{
		if(x % i == 0) return false;
	}
	return true;
}

task main()
{
	while(cnt < 1000)
	{
		if(isPrimeNumber(j) == true)
		{
			arrPrime[cnt] = j;
			displayTextLine(cnt+1, "%d    %d", cnt, j);
			sleep(500);
			cnt++;
		}
		j++;
	}

	while(true)
	{
		eraseDisplay();
		for(j = 0; j < 1000; j += 3)
		{
			displayTextLine(j+1, "%5d %5d %5d", arrPrime[j], arrPrime[j+1], arrPrime[j+2]; // 3 Column Print -> don't know
		}
		sleep(3000);
	}

}//task
