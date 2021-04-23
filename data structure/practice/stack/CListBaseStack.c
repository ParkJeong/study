#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

void	StackInit(Stack *pstack)
{
	pstack->tail = NULL;
	pstack->cur = NULL;
	pstack->before = NULL;
	pstack->numOfData = 0;
}

int		SIsEmpty(Stack *pstack)
{
	if (pstack->tail == NULL)
		return (TRUE);
	else
		return (FALSE);
}

void	SPush(Stack *pstack, Data data)
{
	LInsertFront(pstack, data);
}

Data	SPop(Stack *pstack)
{
	Data temp;

	LFirst(pstack, &temp);
	return (LRemove(pstack));
}

Data	SPeek(Stack *pstack)
{
	Data temp;

	return (LFirst(pstack, &temp));
}
