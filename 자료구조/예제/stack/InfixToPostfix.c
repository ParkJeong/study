#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"

int GetOpPrec(char op)
{
	switch (op)
	{
		case '*':
		case '/':
			return (5);
		case '+':
		case '-':
			return (3);
		case '(':
			return (1);
	}
	return (-1);
}

int	WhoPrecOp(char op1, char op2)
{
	int	op1Prec;
	int	op2Prec;

	op1Prec = GetOpPrec(op1);
	op2Prec = GetOpPrec(op2);
	
	if (op1Prec > op2Prec)
		return (1);
	else if (op1Prec < op2Prec)
		return (-1);
	else
		return (0);
}

void	ConvToRPNExp(char exp[])
{
	Stack	stack;
	int		expLen;
	char	*convExp;
	int		i, idx;
	char	tok, popOp;

	expLen = strlen(exp);
	convExp = (char *)malloc(expLen + 1);

	memset(convExp, 0, sizeof(char)*expLen + 1);
	StackInit(&stack);

	i = 0;
	idx = 0;
	while (i < expLen)
	{
		tok = exp[i];
		if (isdigit(tok))
			convExp[idx++] = tok;
		else
		{
			switch (tok)
			{
				case '(':
					SPush(&stack, tok);
					break;
				case ')':
					while (1)
					{
						popOp = SPop(&stack);
						if (popOp == '(')
							break;
						convExp[idx++] = popOp;
					}
					break;
				case '+':
				case '-':
				case '*':
				case '/':
					while (!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0)
						convExp[idx++] = SPop(&stack);
					SPush(&stack, tok);
					break;
			}
		}
		i++;
	}

	while(!SIsEmpty(&stack))
		convExp[idx++] = SPop(&stack);

	strcpy(exp, convExp);
	free(convExp);
}
