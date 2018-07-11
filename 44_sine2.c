
#define PAGE_SIZE 170
#define INPUT_SIZE 360
float sinVal[INPUT_SIZE];
int page = 1;

task main()
{
	int startIdx = 0;
	for(int t=0; t<INPUT_SIZE; t++)
	{
		sinVal[t] = sinDegrees(t);
	}

while(true)
	{
		eraseDisplay();
		startIdx = PAGE_SIZE * (page-1);
		for(int i=0; i<PAGE_SIZE; i++)
		{
			drawCircle(i, 50*sinVal[startIdx+i]+50, 2);
			drawLine(i,0,50*sinVal[startIdx+i]+50,50*sinVal[startIdx]+50);
			//drawLine(0,i,i,50*sinVal[startIdx+i]+50); //flag
			//drawLine(i,i,i,50*sinVal[startIdx+i]+50); //butterfly necttie
			//drawLine(i,i,50*sinVal[startIdx+i]+50,i);
			//drawLine(0,0,50*sinVal[startIdx+i]+50,50*sinVal[startIdx]);
			sleep(50);
		}

		displayInverseStringAt(10, 20, "%d / %d", page, INPUT_SIZE / PAGE_SIZE);

		if(getButtonPress(buttonLeft) == true) page--;
		if(getButtonPress(buttonRight) == true) page++;
		if(page < 1) page = 1;
		if(page > INPUT_SIZE/PAGE_SIZE)
			page = INPUT_SIZE/PAGE_SIZE;

		sleep(200);
		flushButtonMessages();
	}
}
