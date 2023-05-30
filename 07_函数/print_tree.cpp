#include <iostream>
#include "tree_node.h"

// 利用递归实现二叉树的先序遍历打印输出
void printTreePreOrder(TreeNode* root)
{
	// 基准情况：如果是空树，就直接返回
	if (root == nullptr) return;

	// 先打印根节点的值
	//cout << (*root).name << "\t";
	cout << root->name << "\t";

	// 递归打印左右子树
	printTreePreOrder(root->left);
	printTreePreOrder(root->right);
}

// 中序遍历
void printTreeInOrder(TreeNode* root)
{
	// 基准情况：如果是空树，就直接返回
	if (root == nullptr) return;

	// 先打印左子树
	printTreeInOrder(root->left);
	// 打印根节点
	cout << root->name << "\t";
	// 递归打印右子树
	printTreeInOrder(root->right);
}

// 后序遍历
void printTreePostOrder(TreeNode* root)
{
	// 基准情况：如果是空树，就直接返回
	if (root == nullptr) return;

	// 先打印左右子树
	printTreePostOrder(root->left);
	printTreePostOrder(root->right);

	// 再打印根节点
	cout << root->name << "\t";
}