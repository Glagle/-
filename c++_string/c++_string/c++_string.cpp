// c++_string.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	const char a[] = {'a','v','b','b','\0'};  //数组需要显示的以\0结尾，
	                                         //否则循环不会终止
	const char b[] = "avbb";               //字符串字面值不需要显示结尾
	int value =  end(a)-begin(a);  //数组长度
	const char *c = b;
	while (*c)                           
	{
		cout << *c << " ";
		++c;
	}
	cout << value << endl;
    return 0;
}

