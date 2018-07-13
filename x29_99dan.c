int n = 2;


task main()
{

	for(int i = 1; i <= 9; i++)
	{
		displayCenteredBigTextLine(3, "%d x %d = %d", n, i, n*i);
		sleep(1000);

		waitForButtonPress(); // 1st time OK but next fail
		flushButtonMessages(); // I dont
	}

}
