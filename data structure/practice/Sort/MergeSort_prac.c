#include <stdio.h>
#include <stdlib.h>

void    MergeTwoArea(int arr[], int start, int mid, int end)
{
    int lIdx;
    int rIdx;
    int idx;
    int *sortArr;
    
    sortArr = (int *)malloc(sizeof(int) * (end + 1));
    idx = start;
    lIdx = start;
    rIdx = mid + 1;

    while (lIdx <= mid && rIdx <= end)
    {
        if (arr[lIdx] > arr[rIdx])
            sortArr[idx++] = arr[rIdx++];
        else
            sortArr[idx++] = arr[lIdx++];
    }

    while (lIdx <= mid)
        sortArr[idx++] = arr[lIdx++];        
    while (rIdx <= end)
        sortArr[idx++] = arr[rIdx++];

    for (int i = start; i <= end; i++)
        arr[i] = sortArr[i];

    free(sortArr);
    
}

void    MergeSort(int arr[], int start, int end)
{
    if (start >= end)
        return ;
    int mid = (start + end) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    MergeTwoArea(arr, start, mid, end);
}

int main(void)
{
   int	arr[7] = {3, 2, 4, 1, 7, 6, 5};
	int	i;

	MergeSort(arr, 0, sizeof(arr)/sizeof(int) - 1);

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return (0);
}