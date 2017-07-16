// 添加字符1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using  namespace std;
#define MAX(a,b)   (a>b) ? a:b

int least_count(string a, string b)
{
	int a_size = a.size();
	int b_size = b.size();
	int add_number = b_size - a_size;
	int max = 0;
	for (int i = 0;i <= add_number;i++)
	{
		int num = 0;
		for (int j = 0;j < a_size;j++)
		{
			if (a[j] == b[i + j])
				num++;

		}

		max = MAX(max, num);
	}

	return (a_size - max);

}

int main()
{
	string  a, b;int m;
	cin >> a >> b;
	m = least_count(a, b);
	cout << m;
	return 0;
}
