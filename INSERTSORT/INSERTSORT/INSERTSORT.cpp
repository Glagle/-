// INSERTSORT.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
using namespace std;

void insertsort(int arr[], int n)
{
	for (int i = 1;i < n;i++)
	{
		//Ѱ��arr[i]���ʵ�ǰ��λ��
		for (int j = i;j > 0;j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
			else
				break;
		}
	}
}

int main()
{
	int num[4] = { 3,1,5,2 };
	insertsort(num,4);
	for (auto i : num)
		cout << i;
    return 0;
}

