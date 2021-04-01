#include "CLinkedList.h"

Data	checkNightDuty(char *name, int num)
{

}

int	main(void)
{
	
	Employee park;
	Employee kim;
	Employee lee;
	Employee jin;

	park.employeeNum = 1;
	kim.employeeNum = 2;
	lee.employeeNum = 3;
	jin.employeeNum = 4;

	park.name = "park";
	kim.name = "kim";
	lee.name = "lee";
	jin.name = "jin";


	List	*list;

	ListInit(list);

	LInsertFront(list, park);
	LInsertFront(list, kim);
	LInsertFront(list, lee);
	LInsertFront(list, jin);

	return (0);
}
