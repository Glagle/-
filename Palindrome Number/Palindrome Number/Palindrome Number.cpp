// Palindrome Number.cpp : �������̨Ӧ�ó������ڵ㡣
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
		while (b > 0)   //�������ǻ��ģ�a=x�ķ�ת
		{
			tmp = a;
			a *= 10;
			a += b % 10;
		   
			if((a- b % 10)/10!=tmp)   //Խ����
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

