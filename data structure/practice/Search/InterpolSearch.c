#include <stdio.h>

int	ISearch(int ar[], int first, int last, int target)
{
	int	mid;
	if (arr[first] > target || arr[last] < target)
		return -1;

	//mid = (first + last) / 2;
	mid = ((double)(target - ar[first]))*(last - first)/(ar[last] - ar[first]) + first;

	if (ar[mid] == target)
		return mid;
	else if (target < ar[mid])
		return ISearch(ar, first, mid - 1, target);
	else
		return ISearch(ar, mid + 1, last, target);
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int idx;

	idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, 2);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스: %d\n", idx);

	idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, 10);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스: %d\n", idx);


}
