// reverse_integer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		bool flag=false;
		int rev;
		if(x<0)
		{
			flag = true;
			x = 0 - x;
		}

		while (x > 0)
		{
			if ((INT_MAX - x % 10) / 10 < rev)
			{
				return 0;
			}

			rev = x % 10 + rev * 10;
			x = x / 10;
		}

		if (flag == true)
		{
			rev = 0 - rev;
		}
		return rev;
	}
};

int main()
{
    return 0;
}

