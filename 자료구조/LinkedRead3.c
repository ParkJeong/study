#include <stdio.h>
#include <stdlib.h>

typedef	struct		_node
{
	int		data;
	struct _node	*next;
}			Node;

int	main(void)
{
	Node	*head;
	Node	*tail;
	Node	*cur;
	Node	*newNode;
	int	readData;

	head = (Node *)malloc(sizeof(Node));
	tail = head;
	cur = NULL;
	newNode = NULL;
	while (1)
	{
		printf("자연수 입력: ");
		scanf("%d", &readData);
		if (readData < 1)
			break ;

		newNode = (Node *)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		tail->next = newNode;
		tail = newNode;
	}
	printf("\n");

	printf("입력받은 데이터의 전체출력\n");
	if (head == NULL)
		printf("저장된 자연수가 존재하지 않습니다.\n");
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	if (head->next == NULL)
		return (0);
	
	Node	*delNode;
	Node	*delNextNode;

	delNode = head->next;
	delNextNode = head->next->next;

	while (delNextNode != NULL)
	{
		delNode = delNextNode;
		delNextNode = delNextNode->next;

		printf("%d을(를) 삭제합니다. \n", delNode->data);
		free(delNode);
	}
	return (0);
}
