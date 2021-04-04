#include <stdio.h>
#include <stdlib.h>
#include "CircularQueue.h"

int		NextPosId(int pos)
{
	if (pos == QUE_LEN - 1)
		return (0);
	else
		return (pos + 1);
}

void	QueueInit(Queue *pq)
{
	pq->front = 0;
	pq->rear = 0;
}

int		QIsEmpty(Queue *pq)
{
	if (pq->front == pq->rear)
		return (TRUE);
	else
		return (FALSE);
}

void	Enqueue(Queue *pq, Data data)
{
	if (NextPosId(pq->rear) == pq->front)
	{
		printf("Queue Memory Error!\n");
		exit(-1);
	}
	pq->rear = NextPosId(pq->rear);
	pq->queArr[pq->rear] = data;
}

Data	Dequeue(Queue *pq)
{
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!\n");
		exit(-1);
	}
	pq->front = NextPosId(pq->front);

	return (pq->queArr[pq->front]);
}

Data	QPeek(Queue *pq)
{
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!\n");
		exit(-1);
	}

	return (pq->queArr[NextPosId(pq->front)]);
}
