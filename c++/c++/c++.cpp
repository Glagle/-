// c++.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{                  //��ʵ���Ƕ�ASCii��Ĳ���
	string s;
	char a = 'a';
	int  b = a - '0';  //�ַ�ת������
	int  c = (int)a;   //����asc��ʮ����ֵ,���ӣ�int��Ҳ����ʽת

	char d = a + 32;   //תСд
	char f = a - 32;   //ת��д

	cout << a << endl << b << endl<<c<<endl<<d<<endl<<f<<endl;

	//decltype(s.size()) punct_cnt = 0;
	//while (getline(cin, s))//��һ���а����ո� ��78ҳ
	//{
	//	for (auto &c : s)
	//		/*if (ispunct(c))
	//			++punct_cnt;*/
	//		c = toupper(c);  //ת���ɴ�д��ĸ
	//	cout<<isdigit('c')<<endl;
	//	cout << s << endl;
	//}
    return 0;
}

