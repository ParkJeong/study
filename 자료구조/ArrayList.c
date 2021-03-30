#include <stdio.h>
#include "ArrayList.h"

void	ListInit(List *plist)
{
	plist->numOfData = 0;
	plist->curPosition = -1;
}

void	LInsert(List *plist, LData data)
{
	if (plist->numOfData >= LIST_LEN)
	{
		puts("저장이 불가능하다.");
		return ;
	}
	
	plist->arr[plist->numOfData] = data;
	plist->numOfData++;
}

int	LFirst(List *plist, LData *pdata)
{
	if (plist->numOfData == 0)
		return (FALSE);

	plist->curPosition = 0;
	*pdata = plist->arr[0];
	return (TRUE);
}

int	LNext(*plist, LData * pdata)
{
	if (plist->curPosition >= plist->numOfData - 1)
		return (FALSE);
	plist->curPosition++;
	*pdata = plist->arr[plist->curPosition];
	return (TRUE);
}

LData	LRemove(list *plist)
{
	int	rpos;
	int	num;
	int	i;
	LData	rdata;

	rpos = plist->curPosition;
	num = plist->numOfData;
	rada = plist->arr[rpos];

	i = rpos;
	while (i < num - 1)
	{
		plist->arr[i] = plist->arr[i + 1];
		i++;
	}
	plist->numOfData--;
	plist->curPosition--;
	return (rdata);
}

int	LCount(list *plist)
{
	return (plist->numOfData);
}
