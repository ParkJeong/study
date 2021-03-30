#include <stdio.h>

int	main(void)
{
	int	i;
	int	sum;
	List	list;

	ListInit(&list);

	i = 1;
	while (i <= 9)
		Linsert(&list, i++);
	sum = 0;
	if (LFirst(&list, &i))
	{
		sum += i;
		while (LNext(&list, &i))
			sum += i;
	}
	printf("총 합:%d\n", i);

	if (LFirst(&list, &i))
	{
		if (i % 2 == 0 || i % 3 == 0)
			LRemove(&list);
		while (LNext(&list, &i))
		{
			if (i % 2 == 0 || i % 3 == 0)
				LRemove(&list);
		}
	}

	if (LFirst(&list, &i))
	{
		printf("%d ", i);
		while (LNext(&list, &i))
			printf("%d ", i);
	}
	printf("\n\n");

	return (0);
}
