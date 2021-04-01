int	LSearch(int ar[], int len, int target)
{
	for (int i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return (i);
	}
	return (-1);
}
