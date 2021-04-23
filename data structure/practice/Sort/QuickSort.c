#include <stdio.h>

void    Swap(int arr[], int idx1, int idx2)
{
    int tmp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = tmp;
}

int     Partition(int arr[], int left, int right)
{
    int pivot;
    int low;
    int high;
    
    pivot = left;
    low = left + 1;
    high = right;

    while (low <= high)
    {
        while (arr[low] <= arr[pivot] && low <= right)
            low++;
        while (arr[high] >= arr[pivot] && high >= left + 1)
            high--;
        if (low <= high)
            Swap(arr, low, high);
    }
    Swap(arr, pivot, high);

    return (high);
}

void    QuickSort(int arr[], int left, int right)
{
    if (left <= right)
    {
        int pivot = Partition(arr, left, right);
        QuickSort(arr, left, pivot - 1);
        QuickSort(arr, pivot + 1, right);
    }
}