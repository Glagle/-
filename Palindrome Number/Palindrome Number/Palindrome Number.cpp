// Palindrome Number.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

#define MIN(x,y)    (x<y) ?  x:y

class Solution {
public:
	bool isPalindrome(int x) {
		int a, b, tmp;int i = 0;
		a = 0;
		b = (x);
		while (b > 0)   //负数不是回文，a=x的反转
		{
			tmp = a;
			a *= 10;
			a += b % 10;
		   
			if((a- b % 10)/10!=tmp)   //越界检查
			{
				break;
			}

			b = b / 10;
			i++;
		}

		return  a == abs(x);

	}
};

int main()
{
	int x;
	Solution s;
	bool flag;
	x = -2;
	flag=s.isPalindrome(x);
	cout << flag;
	x=MIN(3, 2);
	cout << x;
    return 0;
}

