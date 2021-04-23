#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CircularQueue.h"

#define	CUS_COME_TERM	15

#define	CHE_BUR			0
#define BUL_BUR			1
#define	DUB_BUR			2

#define	CHE_TERM		12
#define	BUL_TERM		15
#define	DUB_TERM		24

int	main(void)
{
	int		makeProc;
	int		cheOrder;
	int		bulOrder;
	int		dubOrder;
	int		sec;
	Queue	que;

	QueueInit(&que);
	srand(time(NULL));

	makeProc = 0;
	cheOrder = 0;
	bulOrder = 0;
	dubOrder = 0;
	sec = 0;
	while (sec < 3600)
	{
		if (sec % CUS_COME_TERM == 0)
		{
			switch (rand() % 3)
			{
				case CHE_BUR:
					Enqueue(&que, CHE_TERM);
					cheOrder += 1;
					break;
				case BUL_BUR:
					Enqueue(&que, BUL_TERM);
					bulOrder += 1;
					break;
				case DUB_BUR:
					Enqueue(&que, DUB_TERM);
					dubOrder += 1;
					break;
			}
		}
		if (makeProc <= 0 && !QIsEmpty(&que))
			makeProc = Dequeue(&que);

		makeProc--;
		sec++;
	}
	

	return (0);
}
