// 度度熊回家.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int N;

int dis(int* number_copy, int nums,int flag,int start,int stop)  //排好序的点求某点出发的距离
{
	int tmp;
	if (flag == 0)  //舍弃左点
	{
		if(start<stop)
		tmp = 2 * abs(start - number_copy[1]) + abs(stop - start) + 2 * abs(stop - number_copy[nums - 1]);
		else
		tmp = 2 * abs(start - number_copy[nums-1]) + abs(stop - start) + 2 * abs(stop - number_copy[1]);
	}
	if (flag == 1)   //舍弃右点
	{
		if (start<stop)
			tmp = 2 * abs(start - number_copy[0]) + abs(stop - start) + 2 * abs(stop - number_copy[nums - 2]);
		else
			tmp = 2 * abs(start - number_copy[nums - 2]) + abs(stop - start) + 2 * abs(stop - number_copy[0]);
	}
	return tmp;
}


class Solution {
public :
	int	min_dis(int* number, int nums)
	{
		int min_dis;
		int* number_copy = new int[nums];

		memcpy(number_copy, number, nums*sizeof(int));

		sort(number_copy,number_copy+nums);
	    
		if (number_copy[0] == number[0] && number_copy[nums - 1] == number[nums - 1])
			return  (number_copy[nums - 1] - number_copy[0]);


		else if((number_copy[nums - 1] == number[nums - 1]) || ((abs(number_copy[0]- number_copy[1]) >= abs(number_copy[nums-1] - number_copy[nums-2])) && (number_copy[0] != number[0])) )
			{
				//舍弃最左边的点
				min_dis=dis(number_copy,nums,0, number[0], number[nums-1]);
			}

		else if ((number_copy[0] == number[0]) || ((abs(number_copy[0] - number_copy[1]) < abs(number_copy[nums - 1] - number_copy[nums - 2])) && (number_copy[nums - 1] != number[nums - 1])) )
		{
			//舍弃最右边的点
			min_dis=dis(number_copy, nums, 1, number[0], number[nums - 1]);
		}

		delete[] number_copy;
		return min_dis;
	}


};


int* get_number(void)
{
	cin >> N;
	int* cat = new int[N];

	for (int i = 0;i < N;i++)
	{
		cin >> cat[i];
	}

	return cat;
	//for (int i = 0;i < N;i++)
	//{
	//	cout<< cat[i]<<" ";
	//}
}


int main()
{
	int* number;
	int dis=0;
	Solution s;
	number = get_number();

	dis=s.min_dis(number,N);

	delete[] number;
	cout << dis;
//	system("pause");
    return 0;
}

