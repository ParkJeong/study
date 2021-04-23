#include <stdio.h>

void	BubbleSort(int arr[], int n)
{
	int	i, j;
	int temp;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	arr[4] = {3, 2, 4, 1};
	int	i;

	BubbleSort(arr, sizeof(arr)/sizeof(int));

	for (i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return (0);
}
