// 数组变换.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int number,priveous,i;
	cin >> number;
	int *arr = new int[number];
	for (int i = 0;i < number;i++)
		cin >> arr[i];

	while (arr[0] % 2 == 0)
		arr[0] = arr[0] / 2;
	priveous = arr[0];


	for ( i = 1;i < number;i++)
	{
		while (arr[i] % 2 == 0)
			arr[i] = arr[i] / 2;

		if (arr[i] != priveous)
			break;

		priveous = arr[i];

	}

	if (i < number)
		cout << "NO";
	else
		cout << "YES";

	delete[] arr;
    return 0;
}

