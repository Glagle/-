// ��ָOFFER.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//n������0 �� n-1���ҳ������ظ�����
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


//n+1������1��n���ҳ������ظ�����������˳�򲻿ɸı�
//�϶�����һ������������ظ�������������һ��
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
				break;   //�϶�����һ���ظ� ,û�ѵ�����
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


//��ά�������,�����Ͻǿ�ʼ������С���ҷ�Χ  P.47	
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
				row++;       //�����ƶ�
			else
			{
				cloumn--;  //  �����ƶ�
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
		++orignalLength;       //û�а��� '\0'
		if (string[i] == ' ')
			++numberOfBlank;
		++i;
	}

	int newLength = orignalLength + numberOfBlank * 2;
	if (newLength > length)   //����������ڴ�
		return;

	int indexOfOriginal = orignalLength;
	int indexOfNew = newLength;  //��������'\0'
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

