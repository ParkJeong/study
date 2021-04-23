#ifndef __BINARY_TREE2_H__
#define __BINARY_TREE2_H__

typedef	int				BTData;

typedef	struct			_BTreeNode
{
	BTData				data;
	struct	_BTreeNode	*left;
	struct	_BTreeNode	*right;
}						BTreeNode;

BTreeNode				*MakeBTreeNode(void);
BTData					GetData(BTreeNode *bt);
void					SetData(BTreeNode *bt, BTData data);

BTreeNode				*GetLeftSubTree(BTreeNode *bt);
BTreeNode				*GetRightSubTree(BTreeNode *bt);

void					MakeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void					MakeRightSubTree(BTreeNode *main, BTreeNode *sub);

typedef	void			(*VisitFuncPtr)(BTData data);

void					PreorderTraverse(BTreeNode *bt, VisitFuncPtr action);
void					InorderTraverse(BTreeNode *bt, VisitFuncPtr action);
void					PostorderTraverse(BTreeNode *bt, VisitFuncPtr action);

void					DeleteTree(BTreeNode *bt);

#endif
