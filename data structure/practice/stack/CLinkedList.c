#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

void	ListInit(List *plist)
{
	plist->tail = NULL;
	plist->cur = NULL;
	plist->before = NULL;
	plist->numOfData = 0;
}

void	LInsert(List *plist, Data data)
{
	Node	*newNode;

	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL)
	{
		plist->tail = newNode;
		plist->tail->next = plist->tail;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		plist->tail = newNode;
	}

	plist->numOfData++;
}

void	LInsertFront(List *plist, Data data)
{
	Node	*newNode;

	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL)
	{
		plist->tail = newNode;
		plist->tail->next = plist->tail;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;

	}

	plist->numOfData++;
}

int	LFirst(List *plist, Data *pdata)
{
	if (plist->tail == NULL)
		return (FALSE);

	plist->cur = plist->tail->next;
	plist->before = plist->tail;

	*pdata = plist->cur->data;
	
	return (TRUE);
}

int	LNext(List *plist, Data *pdata)
{
	if (plist->tail == NULL)
		return (FALSE);

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;

	return (TRUE);
}

Data	LRemove(List *plist)
{
	Node	*rpos;
	Data	rdata;

	rpos = plist->cur;
	rdata = rpos->data;

	if (rpos == plist->tail)
	{
		if (plist->tail == plist->tail->next)
			plist->tail = NULL;
		else
			plist->tail = plist->before;
	}
	
	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	plist->numOfData--;

	return (rdata);
}

int	LCount(List *plist)
{
	return (plist->numOfData);
}

Data	checkNightDuty(char *name, int num)
{
	Node	*pos;

	pos = this->tail->next;
	while (check_str(pos->data->name, name) != 0)
	{
		pos = pos->next;
		if (pos == this->tail->next)
			return (NULL);
	}

	while (num-- > 0)
		pos = pos->next;
	return (pos->data);
}

int	check_str(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (-1);

	while (*s1 && *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
