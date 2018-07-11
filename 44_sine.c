
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
			drawCircle(i, 50*sinVal[startIdx+i]+50, 10); //drawCircle function error!
			//drawEllipse(i, i, 50*sinVal[startIdx+i]+50, 50*sinVal[startIdx+i]+50);
			//drawRect(i, i, 50*sinVal[startIdx+i]+50 , 50*sinVal[startIdx+i]+50);
			//drawEllipse(i, 50*sinVal[startIdx+i]+50, i, 50*sinVal[startIdx+i]+50);
			//drawEllipse(i, 50*sinVal[startIdx+i]+50, 50*sinVal[startIdx+i]+50, i);
			//drawEllipse(50*sinVal[startIdx+i]+50, 50*sinVal[startIdx+i]+50, i, i);
		}
	}
	displayInverseStringAt(20, 8, "%d / %d", page, INPUT_SIZE / PAGE_SIZE);

	if(getButtonPress(buttonLeft) == true) page--;
	if(getButtonPress(buttonRight) == true) page++;
	if(page < 1) page = 1;
	if(page > INPUT_SIZE/PAGE_SIZE)
		page = INPUT_SIZE/PAGE_SIZE;

		sleep(200);
		flushButtonMessages();



}
