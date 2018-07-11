
task main()
{
	int x=0, y=0; //y=100;

	while(true)
	{
		drawBmpfile(x, y, "Dial 0");
		x++; y++; //y--;
		sleep(100);

		if(x > 177) break;
	}


}
