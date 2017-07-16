// stoi.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>

using namespace std;

class Solution {
public:
	int myAtoi(string str) {
		int i=0;
		int n=0;
		while (str[i] != 0)
		{
			if ('0' <= str[i] <= '9')
			{
				n = n * 10 + str[i]-'0';
			}
			++i;

		}
	}
};

int main()
{
    return 0;
}

