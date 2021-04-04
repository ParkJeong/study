#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "PostCalculator.h"
#include <stdio.h>

int EvalRPNExp(char exp[])
{
	Stack	stack;
	int		expLen;
	int		idx;
	int		ret;
	int		left_val;
	int		right_val;

	StackInit(&stack);
	expLen = strlen(exp);
	ret = 0;
	idx = 0;

	while (expLen-- > 0)
	{
		if (isdigit(exp[idx]))
			SPush(&stack, exp[idx] - '0');
		else
		{
			right_val = SPop(&stack);
			left_val = SPop(&stack);
			switch (exp[idx])
			{
				case '+':
					ret = left_val + right_val;
					break;
				case '-':
					ret = left_val - right_val;
					break;
				case '*':
					ret = left_val * right_val;
					break;
				case '/':
					ret = left_val / right_val;
					break;
			}
			SPush(&stack, ret);
		}
		idx++;
	}
	ret = SPop(&stack);

	return (ret);
}
