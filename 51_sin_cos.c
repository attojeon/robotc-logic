#define MAX_ANGLE	360
#define RADIUS		60

task main()
{
	float x = 0.0;
	float y = 0.0;
	int px = 0;
	int py = 0;

	while(true)
	{
		eraseDisplay();
		displayInverseStringAt(20, 124, "px:%d, py:%d", px, py);
		drawCircle(px, py, 2);
		for(int t=0; t<MAX_ANGLE; t++)
		{
			x = RADIUS * cosDegrees(t) + px;
			y = RADIUS * sinDegrees(t) + py;
			drawCircle(x, y, 2);
		}

		//input processing
		if(getButtonPress(buttonLeft) == true) px--;
		if(getButtonPress(buttonRight) == true) px++;
		if(getButtonPress(buttonUp) == true) py++;
		if(getButtonPress(buttonDown) == true) py--;

		sleep(40);
		flushButtonMessages();
	}



}
