#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

BTreeNode	*MakeBTreeNode(void)
{
	BTreeNode	*newNode;

	newNode = (BTreeNode *)malloc(sizeof(BTreeNode));
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

BTData		GetData(BTreeNode *bt)
{
	return (bt->data);
}

void		SetData(BTreeNode *bt, BTData data)
{
	bt->data = data;
}

BTreeNode	*GetLeftSubTree(BTreeNode *bt)
{
	return (bt->left);
}

BTreeNode	*GetRightSubTree(BTreeNode *bt)
{
	return (bt->right);
}

void		MakeLeftSubTree(BTreeNode *main, BTreeNode *sub)
{
	if (main->left != NULL)
	{
		while (GetLeftSubTree(main->left) != NULL)
		{

		}
		free(main->left);
	}
	main->left = sub;
}

void		MakeRightSubTree(BTreeNode *main, BTreeNode *sub)
{
	if (main->right != NULL)
		free(main->right);
	main->right = sub;
}
