#include <stdio.h>
#include <stdlib.h>

void	swap3(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	swap2(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	MergeTwoArea(int arr[], int left, int mid, int right)
{
	int	fIdx;
	int	rIdx;
	int	i;
	int	sIdx;

	fIdx = left;
	rIdx = mid + 1;
	sIdx = left;

	while (fIdx <= mid && rIdx <= right)
	{
		if (arr[fIdx] <= arr[rIdx])
			swap(&arr[sIdx], &arr[fIdx++]);
		else
			swap(&arr[sIdx], &arr[rIdx++]);
		sIdx++;
	}
	printf("left:%d, mid:%d, right:%d\n", left, mid, right);
	for (i = left; i <= right; i++)
		printf("%d ", arr[i]);

	printf("\n------\n");
}

void	MergeSort(int arr[], int left, int right)
{
	int	mid;

	if (left < right)
	{
		mid = (left + right) / 2;

		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);

		MergeTwoArea(arr, left, mid, right);
	}
}

int		main(void)
{
	int	arr[8] = {8, 2, 3, 7, 1, 5, 4, 6};
	int	i;

	MergeSort(arr, 0, sizeof(arr)/sizeof(int) - 1);

	for (i = 0; i < 8; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return (0);
}
