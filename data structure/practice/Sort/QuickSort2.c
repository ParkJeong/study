#include <stdio.h>

void    Swap(int arr[], int idx1, int idx2)
{
    int tmp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = tmp;
}

int     SelectPivot(int arr[], int left, int right)
{
    int mid = (left + right) / 2;

    if (arr[left] > arr[mid])
    {
        if (arr[mid] > arr[right])
            return (mid);
        else
        {
            if (arr[left] > arr[right])
                return (right);
            else
                return (left);
        }
    }
    else
    {
        if (arr[left] > arr[right])
            return (left);
        else
        {
            if (arr[mid] > arr[right])
                return (right);
            else
                return (mid);
        }
    }
}

int     Partition(int arr[], int left, int right)
{
    int low;
    int high;
    int pIdx;
    int pivot;

    low = left + 1;
    high = right;
    pIdx = SelectPivot(arr, left, right);
    pivot = arr[pIdx];

    Swap(arr, left, pIdx);

    printf("pivot: %d \n", pivot);
    while (low < high)
    {
        while (arr[low] <= pivot && low < right)
            low++;
        while (arr[high] >= pivot && high > left)
            high--;
        if (low < high)
            Swap(arr, low, high);
    }
    Swap(arr, left, high);

    return (high);
}

void    QuickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pivot = Partition(arr, left, right);
        QuickSort(arr, left, pivot - 1);
        QuickSort(arr, pivot + 1, right);
    }
}

int		main(void)
{
	int	arr1[7] = {3, 2, 4, 1, 7, 6, 5};
	int	arr2[3] = {3, 3, 3};
    int arr3[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int len1 = sizeof(arr1)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);
    int len3 = sizeof(arr3)/sizeof(int);
	
    // QuickSort(arr1, 0, len1 - 1);

	// for (int i = 0; i < len1; i++)
	// 	printf("%d ", arr1[i]);

	// printf("\n");

    // QuickSort(arr2, 0, len2 - 1);

	// for (int i = 0; i < len2; i++)
	// 	printf("%d ", arr2[i]);

	// printf("\n");


    QuickSort(arr3, 0, len3 - 1);

	for (int i = 0; i < len3; i++)
		printf("%d ", arr3[i]);

	printf("\n");
	return (0);
}
