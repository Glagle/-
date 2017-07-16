// add_two_number.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* result_head = new ListNode(0);  // new指向的内存块不会随着函数结束释放掉
		int carry = 0;
		ListNode* curr = result_head;
		while (l1 != NULL || l2 != NULL)
		{
			int x = (l1 != NULL) ? l1->val : 0;
			int y = (l2 != NULL) ? l2->val : 0;
			int sum = x + y + carry;
			carry = sum / 10;
			curr->next =new ListNode(sum % 10);
			curr = curr->next;
			if (l1 != NULL)	l1 = l1->next;
			if (l2 != NULL)	l2 = l2->next;

		}
		if (carry > 0)
			curr->next = new ListNode(carry);

		return result_head->next;
	}
};


void push(int value)
{
	ListNode new_node(value);
	

}

int main()
{
	




	system("PAUSE");
    return 0;
}

