// sizeof_test.cpp : �������̨Ӧ�ó������ڵ㡣
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

