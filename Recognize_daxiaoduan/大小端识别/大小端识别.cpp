// 大小端识别.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int j = i & 0xf;
	cout << j;
    return 0;
}

