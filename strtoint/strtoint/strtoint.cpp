// strtoint.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <assert.h>
using namespace std;

int strtoint(const char* str)
{
	int n=0;

	assert(str);

	while(*str != 0)
	{
		int c = *str - '0';
		n = n * 10 + c;
		++str;
	
	}
	return n;
}

int main()
{
	char str[] = "1234";
	int n;
	n = strtoint(str);
	cout << n << endl;
    return 0;
}

