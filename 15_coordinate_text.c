
task main()
{
	int x=0, y=127;

	while(true)
	{
		drawBmpfile(x, y, "Dial 0");
		x++; y--;
		sleep(100);

	displayTextLine(1, "< %d, %d>", x, y);

		if(y<0) break;
	}



}
