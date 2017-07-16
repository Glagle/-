// 排序子序列.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int number, j, i=0,count=0;
	bool flag=false,previous_flag;     //升序，降序FLAG
	cin >> number;
	int *arr = new int[number];
	for (int i = 0;i < number;i++)
		cin >> arr[i];

	while (i < number)
	{
		for (j = i + 1;j < number;j++)
		{
			if (arr[j] >= arr[j-1])
				flag = true;

			else
				flag = false;

			if (j == i + 1)
			{
				previous_flag = flag;
			}
			if (flag != previous_flag)
				break;

		}
		count++;
		i = j;
	}

	cout << count;

    return 0;
}

