#include <stdio.h>

void	SelSort(int arr[], int n)
{
	int	i,j;
	int	temp;
	int	maxIdx;

	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		maxIdx = i;
		while (j < n)
		{
			if (arr[maxIdx] > arr[j])
				maxIdx = j;
			j++;
		}
		temp = arr[i];
		arr[i] = arr[maxIdx];
		arr[maxIdx] = temp;
		i++;
	}
}

int	main(void)
{
	int	arr[4] = {3, 4, 2, 1};
	int	i;

	SelSort(arr, sizeof(arr)/sizeof(int));

	for (i = 0; i < 4; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return (0);
}
