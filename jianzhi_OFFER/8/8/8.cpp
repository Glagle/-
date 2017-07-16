// 8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
struct BinaryTreeNode {
	int value;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
	BinaryTreeNode *parent;
};

BinaryTreeNode *GetNext(BinaryTreeNode *pNode)
{
	if (pNode == nullptr)
		return NULL;
	BinaryTreeNode *Tmp;
	if (pNode->right != NULL)
	{
		Tmp = pNode->right;
		while (Tmp->left)
			Tmp = Tmp->left;
	}
	else
		if (pNode->parent != nullptr && pNode->parent->left == pNode)
			Tmp = pNode->parent;
		else
		{
			if (pNode->parent != nullptr && pNode->parent->right == pNode)
			{
				Tmp = pNode;
				while (Tmp->parent!=nullptr && Tmp->parent->left != Tmp)
					Tmp = Tmp->parent;
				Tmp = Tmp->parent;
			}

		}
	return Tmp;

}
int main()
{
    return 0;
}

