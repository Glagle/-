// c++_string.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	const char a[] = {'a','v','b','b','\0'};  //������Ҫ��ʾ����\0��β��
	                                         //����ѭ��������ֹ
	const char b[] = "avbb";               //�ַ�������ֵ����Ҫ��ʾ��β
	int value =  end(a)-begin(a);  //���鳤��
	const char *c = b;
	while (*c)                           
	{
		cout << *c << " ";
		++c;
	}
	cout << value << endl;
    return 0;
}

