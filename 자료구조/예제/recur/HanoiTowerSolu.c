#include <stdio.h>

void	HanoiTowerMove(int n, char from, char by, char to)
{
	if (n == 1)
		printf("원반 1을 %c에서 %c로 이동\n", from, to);
	else
	{
		HanoiTowerMove(n - 1, from, to, by);
		printf("원반 %d를 %c에서 %c로 이동\n", n, from, to);
		HanoiTowerMove(n - 1, by, from, to);
	}
}

int		main(void)
{
	HanoiTowerMove(3, 'A', 'B', 'C');
	return (0);
}
