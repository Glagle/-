// 组队.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int number;
	long int sum = 0;
	cin >> number;
	int *arr = new int[3*number];
	for (int i = 0;i < 3*number;i++)
		cin >> arr[i];

	sort(arr,arr+3*number);

	for (int i = number;i < 3 * number;i = i + 2)
		sum = sum + arr[i];

	cout << sum;
	delete[] arr;
	
    return 0;
}

