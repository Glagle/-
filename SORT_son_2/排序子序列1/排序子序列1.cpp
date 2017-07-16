// 排序子序列1.cpp : 定义控制台应用程序的入口点。


#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int number, j, i = 0, count = 0,k;
	bool flag = false, previous_flag;     //升序，降序FLAG
	int first_count = 0;
	cin >> number;
	int *arr = new int[number];
	for (int i = 0;i < number;i++)
		cin >> arr[i];

	while (i < number)
	{
		for (j = i ;j < number;j++)
		{
			if (arr[j + 1] > arr[j])
			{
				flag = true;k = 0;
			}
			if (arr[j + 1] < arr[j])
			{
				flag = false;k = 0;
			}

			if (arr[j+1] == arr[j])
			{
				k++;
			}

			if (arr[j + 1] != arr[j] && first_count==0)
			{
				first_count = 1;
				previous_flag = flag;
			}
			if (flag != previous_flag && k==0)
			{
				first_count = 0;
				break;
			}

		}

		if (j<=number)
		{
			
			count++;
		}

		i = j+1;
	
	}

	cout << count;

	return 0;
}

