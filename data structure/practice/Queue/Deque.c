#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

void	DequeInit(Deque *pdeq)
{
	pdeq->head = NULL;
	pdeq->tail = NULL;
}

int	DQIsEmpty(Deque *pdeq)
{
	if (pdeq->head == NULL)
		return (TRUE);
	else
		return (FALSE);
}

void	DQAddFirst(Deque *pdeq, Data data)
{
	Node	*newNode;

	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = pdeq->head;

	if (DQIsEmpty(pdeq))
		pdeq->tail = newNode;
	else
		pdeq->head->prev = newNode;
	pdeq->head = newNode;
}

void	DQAddLast(Deque *pdeq, Data data)
{
	Node	*newNode;

	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = pdeq->tail;

	if (DQIsEmpty(pdeq))
		pdeq->head = newNode;
	else
		pdeq->tail->next = newNode;
	pdeq->tail = newNode;
}

Data	DQRemoveFirst(Deque *pdeq)
{
	if (DQIsEmpty(pdeq))
	{
		printf("Deque Memory Error!\n");
		exit(-1);
	}
	Node	*delNode;
	Data	delData;

	delNode = pdeq->head;
	delData = delNode->data;

	pdeq->head = pdeq->head->next;
	if (pdeq->head == NULL)
		pdeq->tail = NULL;
	else
		pdeq->head->prev = NULL;
	
	free(delNode);

	return (delData);
}

Data	DQRemoveLast(Deque *pdeq)
{
	if (DQIsEmpty(pdeq))
	{
		printf("Deque Memory Error!\n");
		exit(-1);
	}
	Node	*delNode;
	Data	delData;

	delNode = pdeq->tail;
	delData = delNode->data;

	pdeq->tail = pdeq->tail->prev;
	if (pdeq->tail == NULL)
		pdeq->head = NULL;
	else
		pdeq->tail->next = NULL;

	free(delNode);
	return (delData);
}

Data	DQGetFirst(Deque *pdeq)
{
	if (DQIsEmpty(pdeq))
	{
		printf("Deque Memory Error!\n");
		exit(-1);
	}
	return (pdeq->head->data);
}

Data	DQGetLast(Deque *pdeq)
{
	if (DQIsEmpty(pdeq))
	{
		printf("Deque Memory Error!\n");
		exit(-1);
	}
	return (pdeq->tail->data);
}
