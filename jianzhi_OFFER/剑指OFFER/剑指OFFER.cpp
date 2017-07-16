// 剑指OFFER.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//n个数，0 到 n-1，找出任意重复数字
bool  isDuplicate(int number[], int length, int *duplication)
{

	if (number == nullptr || length <= 0)
		return false;
	for (int i = 0;i < length;i++)
	{
		if (number[i]<0 || number[i]>length - 1)
			return false;
	}

	for (int i = 0;i < length;i++)
	{
		while (number[i] != i)
		{
			if (number[i] == number[number[i]])
			{
				*duplication = number[i];
				return true;
			}
			int temp = number[i];
			number[i] = number[temp];
			number[temp] = temp;
		}
	}
	return false;
}


//n+1个数，1到n，找出任意重复的数，数组顺序不可改变
//肯定会有一个多出来的数重复，不适用于上一题
int countRange(int number[],int length,int start,int end)
{
	if (number == nullptr)
		return 0;
	int count = 0;
	for (int i = 0;i < length;i++)
	{
		if (number[i] >= start && number[i] <= end)
			count++;
	}
	return count;
}
bool isDuplicate_1(int number[], int length, int *p)
{
	if (number == nullptr || length <= 0 || p==nullptr)
		return false;
	for (int i = 0;i < length;i++)
		if (number[i]<1 || number[i]>length - 1)
			return false;
	int start = 1;
	int end = length - 1;
	while (start <= end)
	{
		int middle = ((end - start) >> 1) + start;
		int count = countRange(number,length,start,middle);

		if (start == end)
		{
			if (count > 1)
			{
				*p = start;
				return true;
			}
			else
				break;   //肯定会有一个重复 ,没搜到报错
		}
		if (count > (middle - start + 1))
			end = middle;
		else
		{
			start = middle + 1;
		}

	}
 
	return -1;
}


//二维数组查找,从右上角开始，逐步缩小查找范围  P.47	
bool find_number(int *matrix, int rows, int cloumns, int p)
{
	bool flag = false;
	if (matrix != nullptr || rows > 0 || cloumns > 0)
	{
		int row = 0;
		int cloumn = cloumns - 1;
		while (row < rows && cloumn >= 0)
		{
			if (matrix[row*cloumns + cloumn] == p)
			{
				flag = true;
				break;
			}
			else if (matrix[row*cloumns + cloumn] < p)
				row++;       //向下移动
			else
			{
				cloumn--;  //  向左移动
			}
		}

	}
	return flag;


}

void ReplaceBlank(char string[], int length)
{
	if (string == nullptr || length <= 0)
	{
		return;
	}
	int orignalLength = 0;
	int numberOfBlank = 0;
	int i = 0;
	while (string[i] !='\0')
	{
		++orignalLength;       //没有包括 '\0'
		if (string[i] == ' ')
			++numberOfBlank;
		++i;
	}

	int newLength = orignalLength + numberOfBlank * 2;
	if (newLength > length)   //超出分配的内存
		return;

	int indexOfOriginal = orignalLength;
	int indexOfNew = newLength;  //索引到了'\0'
	while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
	{
		if (string[indexOfOriginal]==' ')
		{
			string[indexOfNew--] = '0';
			string[indexOfNew--] = '2';
			string[indexOfNew--] = '%';
		}
		else
		{
			string[indexOfNew--] = string[indexOfOriginal];
		}
		--indexOfOriginal;
	}
}
int main()
{
	int number [4][4]= { 
		{1,2,8,9},
		{2,4,9,12},
		{4,7,10,13},
		{6,8,11,15},
	};
	char string[20] = " happy world ";
    bool p=false;
 	p=find_number(&number[0][0], 4 ,4,5);

	ReplaceBlank(string, 20);
	cout << string << endl;
    return 0;
}

