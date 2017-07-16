// 9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stack>
using namespace std;

class Solution
{
public:
	void push(int node) {   //进队列

		stack1.push(node);
	}

	int pop() {   //出队列
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

