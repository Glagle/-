// transfer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int way_count=0;

void muli(int number)
{
	int  k = 0;
	int n[10];
	int tmp = 1;

	while (number != 0)
	{
		n[k] = number % 10;
		number = number / 10;
		tmp = tmp*n[k];
		k++;
	}

	if (k == 1)
		return ;


	way_count++;
	muli(tmp);

}

void count(int number)
{

	muli(number);
	
}

int main()
{
	count(285);
	cout << way_count;
    return 0;
}

