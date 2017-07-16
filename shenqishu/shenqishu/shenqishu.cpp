// shenqishu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;


int zhishu[50];


bool issushu(int number)
{
	for (int i = 2;i <= sqrt(number);i++)
	{
		if (number%i == 0)
			return false;

	}
	return true;

}

void find_zhishu(void)
{
	int k = 0;
	for (int i = 11;i < 100;i=i+2)
	{
	  
		if (issushu(i))
		{
			zhishu[k] = i;
			k++;

		}
	}

}

bool isshenwishu(int number)
{
	int  k = 0;
	int n[10];
	int tmp_1;
	int tmp_2;
	while (number != 0)
	{
		n[k] = number % 10;
		number = number / 10;
		k++;
	}
	
	for (int i = 0;i < k;i++)
	{
		for (int j =( i + 1);j< k;j++)
		{
			tmp_1 = n[i] * 10 + n[j];
		    tmp_2=n[j]*10+n[i];
			for (int m = 0;m < 21;m++)
			{ 
				if ( (tmp_1 == zhishu[m]) || (tmp_2 == zhishu[m] ))
				{
					return true;

				}
			}
			
		}

	}
	return false;
}

int find_and_count(int a, int b)
{
	int k=0;
	int count = a;
	for (int i = 0;i < (b - count + 1);i++)
	{
		if (isshenwishu(a))
		{			
			k++;
		}
		a++;
	}

	return k;

}

int main()
{
	int a, b,c;
	find_zhishu();
	cin >> a >> b;

	c=find_and_count(a, b);
	cout << c;
    return 0;
}

