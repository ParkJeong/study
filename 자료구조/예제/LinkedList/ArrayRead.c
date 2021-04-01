#include <stdio.h>

int	main(void)
{
	int	arr[10];
	int	readCount;
	int	readData;
	int	i;

	readCount = 0;
	while (1)
	{
		printf("자연수 입력: ");
		scanf("%d", &readData);
		if(readData < 1)
			break ;
		arr[readCount++] = readData;
	}

	i = 0;
	while (i < readCount)
		printf("%d ", arr[i++]);
	return (0);
}
