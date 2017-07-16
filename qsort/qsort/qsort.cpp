// qsort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <algorithm>

using namespace std;
// 返回j是的arry[l,,,,j)<arry[j],arry[j+1,,,,,,r]>arry[j]
int __partition(int arry[],int l,int r)
{
	int tmp = arry[l];
	int j = l;
//arry[l+1，，，，j]<tmp,arry[j+1,,,,r  ]>tmp
	for (int i = l + 1;i <= r;i++) 
	{
		if (arry[i] < tmp)
		{
			j++;
			swap(arry[j], arry[i]);
		}
	}
	swap(arry[j], arry[l]);
	return j;
}

void __quicksort(int arry[], int l, int r)
{
	if (l >= r)
		return;

	int p;
	p = __partition(arry, l, r);

	__quicksort(arry, l, p-1);
	__quicksort(arry, p + 1, r);

}

void quicksort(int arry[], int n)
{
	__quicksort(arry,0,n-1);
}
int main()
{
    return 0;
}

