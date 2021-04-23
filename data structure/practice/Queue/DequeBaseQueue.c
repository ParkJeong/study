#include <stdio.h>
#include <stdlib.h>
#include "DequeBaseQueue.h"

void	QueueInit(Queue *pq)
{
	pq->head = NULL;
	pq->tail = NULL;
	
	DequeInit(pq);
}

int	QIsEmpty(Queue *pq)
{
	return (DQIsEmpty(pq));
	if (pq->head == NULL)
		return (TRUE);
	else
		return (FALSE);
}

void	Enqueue(Queue *pq, Data data)
{
	DQAddLast(pq, data);
	Node	*newNode;

	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = NULL;
	newNode->prev = pq->tail;
	
	if (pq->tail == NULL)
		pq->head = newNode;
	else
		pq->tail->next = newNode;
	pq->tail = newNode;
}

Data	Dequeue(Queue *pq)
{
	return (DQRemoveFirst(pq));
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!\n");
		exit(-1);
	}
	Node	delNode;
	Data	delData;

	delNode = pq->head;
	delData = delNode->Data;

	pq->head = pq->head->next;
	if (pq->head == NULL)
		pq->tail =NULL;
	else
		pq->head->prev = NULL;

	free(delNode);
	return (delData);
}

Data	QPeek(Queue *pq)
{
	return (DQGetFirst(pq));
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!\n");
		exit(-1);
	}
	return (pq->head->data);
}
