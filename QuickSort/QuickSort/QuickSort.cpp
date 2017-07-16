// QuickSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

//将arr[l,,,,,,mid] 和arr[mid+1,,,,,,,,r]归并
void __merge(int arr[],int l,int mid,int r)
{
	//vector<int> tmp;
	int* tmp=new int[r - l + 1];
	for (int i=l;i <=r;i++)
	{
		tmp[i-l]=(arr[i]);
	}

	int i = l, j = mid + 1;
	for (int k = l;k <= r;k++)
	{
		if (i > mid)
		{
			arr[k]= tmp[j - l];
			j++;
		} 
		else if (j > r)
		{
			arr[k] = tmp[i - l];
			i++;
		}

		else if (tmp[i-l] < tmp[j-l])
		{
			arr[k] = tmp[i - l];
			i++;
		}
		else
		{
			arr[k] = tmp[j - l];
			j++;
		}
	}

	delete[] tmp;
} 

void __mergesort(int arr[], int l, int r)
{
	if (l >= r)
		return;
	int mid = l + ((r - l) >> 1);
	__mergesort(arr, l, mid);
	__mergesort(arr, mid+1, r);
	__merge(arr, l, mid, r);

}

void mergesort(int arr[], int n)
{
	__mergesort(arr, 0, n - 1);
}

int main()

{   
	clock_t start, finish;

	int number[100];
	srand((unsigned)time(NULL));
	for (int i = 0;i < 100;i++)
		number[i]=(rand()%1000);

	start = clock();
	mergesort(number,100);


	for (auto i : number)
		cout <<i<< " "<<endl;
	finish = clock();
	
	cout << (double)(finish - start) /CLOCKS_PER_SEC*1000 <<"ms" << endl;
    return 0;
}

 