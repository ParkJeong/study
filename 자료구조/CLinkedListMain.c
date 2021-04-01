#include <stdio.h>
#include "CLinkedList.h"

int	main(void)
{
	List	list;
	int	data, i, nodeNum;
	
	ListInit(&list);

	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsertFront(&list, 2);
	LInsertFront(&list, 1);

	if(LFirst(&list, &data))
	{
		printf("%d ", data);

		i = 0;
		while (i < LCount(&list) * 3 - 1)
		{
			if (LNext(&list, &data))
				printf("%d ", data);
			i++;
		}
	}
	printf("\n");

	nodeNum = LCount(&list);

	if (nodeNum != 0)
	{
		LFirst(&list, &data);
		if (data % 2 == 0)
			LRemove(&list);

		i = 0;
		while (i < nodeNum - 1)
		{
			LNext(&list, &data);
			if (data % 2 == 0)
				LRemove(&list);
			i++;
		}
	}

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		i = 0;
		while (i < LCount(&list) - 1)
		{
			if (LNext(&list, &data))
				printf("%d ", data);
			i++;
		}
	}
}
