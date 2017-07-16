// c++.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{                  //其实就是对ASCii表的操作
	string s;
	char a = 'a';
	int  b = a - '0';  //字符转成数字
	int  c = (int)a;   //就是asc码十进制值,不加（int）也会隐式转

	char d = a + 32;   //转小写
	char f = a - 32;   //转大写

	cout << a << endl << b << endl<<c<<endl<<d<<endl<<f<<endl;

	//decltype(s.size()) punct_cnt = 0;
	//while (getline(cin, s))//读一整行包括空格 ，78页
	//{
	//	for (auto &c : s)
	//		/*if (ispunct(c))
	//			++punct_cnt;*/
	//		c = toupper(c);  //转换成大写字母
	//	cout<<isdigit('c')<<endl;
	//	cout << s << endl;
	//}
    return 0;
}

