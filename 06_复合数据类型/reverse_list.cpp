#include<iostream>
#include "list_node.h"

using namespace std;

int main()
{
	// 定义链表 1 -> 2 -> 3 -> 4 -> 5 -> NULL
	ListNode node5 = {5, nullptr};
	ListNode node4 = { 4, &node5 };
	ListNode node3 = { 3, &node4 };
	ListNode node2 = { 2, &node3 };
	ListNode node1 = { 1, &node2 };

	ListNode* list = &node1;

	// 打印链表
	ListNode* np = list;
	while (np)
	{
		cout << (*np).value << " -> ";
		np = (*np).next;
	}

	cout << " NULL " << endl;

	// 定义两个指针，一个指向当前遍历的节点，另一个指向之前的节点
	ListNode* curr = list;
	ListNode* prev = nullptr;

	// 翻转链表
	while (curr)
	{
		// 先临时保存指向下一个节点的指针
		ListNode* temp = curr -> next;
		curr->next = prev;
		
		// 两个指针都向前移动
		prev = curr;
		curr = temp;
	}

	ListNode* newList = prev;

	np = newList;
	while (np)
	{
		cout << np->value << " -> ";
		np = np->next;
	}

	cout << " NULL " << endl;

	cin.get();

}