#define PADDING_LEFT	29  //29 = cener = (178 - C_SIZE * 10 ) / 2
#define PADDING_TOP		4
#define MAX_COL				10
#define MAX_ROW				10
#define C_SIZE				12

int st_x = 0;
int st_y = 0;
int x = 0;
int y = 0;

void ato_init()
{
	displayCenteredTextLine(5, "Press any button");
	waitForButtonPress();
}

void ato_waitForExit()
{
	flushButtonMessages();
	waitForButtonPress();
}

task main()
{
	ato_init();

	while(true)
	{
		eraseDisplay();
		for(int col = 0; col < MAX_COL; col++)
		{
			for(int row = 0; row < MAX_ROW; row++)
			{
				st_x = col * C_SIZE + PADDING_LEFT;
				st_y = row * C_SIZE + PADDING_TOP;
				drawRect(st_x, st_y, st_x + C_SIZE, st_y + C_SIZE);
			}
		}

		st_x = 0;
		st_y = 0;
		for(int row = 0; row < MAX_ROW; row++) //move up OK, move down fail
		{
			for(int col = 0; col <= MAX_COL; col++)
			{
				eraseDisplay();
				fillRect(st_x + PADDING_LEFT + col*C_SIZE, st_y + PADDING_TOP + row*C_SIZE, st_x + PADDING_LEFT + C_SIZE, st_y + C_SIZE + PADDING_TOP + row*C_SIZE)
			}
			sleep(500);
		}
	}

ato_waitForExit();

}
