/*
	drawCircle function will not be used soon.
	drawCircle function's parameter were changed! 
	We should check the paramter and it's using.
*/

task main()
{
	int x=0, y=0;

	while(true)
	{
		eraseDisplay();
		drawCircle(x, y, 5);
		x++; y++;
		sleep(50);
	}


}
