// 9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stack>
using namespace std;

class Solution
{
public:
	void push(int node) {   //������

		stack1.push(node);
	}

	int pop() {   //������
		int tmp = 0;

		if (stack2.empty())
		{
			while (!stack1.empty())
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
		}
		tmp = stack2.top();
		stack2.pop();

		return tmp;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};

int main()
{
    return 0;
}

