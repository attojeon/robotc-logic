
task main()
{
	int x=0, y=127;

	while(true)
	{
		drawBmpfile(x, y, "Dial 0");
		x++; y--;
		sleep(100);

		if(y > 100) break;
	}


}
