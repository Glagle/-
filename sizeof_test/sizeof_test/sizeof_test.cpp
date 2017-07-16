// sizeof_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void fun(void)
{
	cout << "fun" << endl;

}

struct test {
	int a;
	void (*fun)();

};

int main()
{
	test t;
	t.fun = fun;
	(*t.fun)();
	cout << "sizeof(t):" << sizeof(t) << endl;
	if (-1)
		cout << "y" << endl;
    return 0;
}

