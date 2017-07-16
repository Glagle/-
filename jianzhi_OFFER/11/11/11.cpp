// 11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

int GetMin(vector<int> &rotateArray)
{
	int min = rotateArray[0];
	for (int i = 0; i < rotateArray.size(); i++)
	{
		if (rotateArray[i] < min)
			min = rotateArray[i];
	}
	return min;
}
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.size() == 0)
			return  0;

		int Index1 = 0;
		int Index2 = rotateArray.size()-1;
		int IndexMid = Index1;
		while (rotateArray[Index1] >= rotateArray[Index2])
		{
			if (Index2 - Index1== 1)
			{
				IndexMid = Index2;
				break;
			}
			IndexMid = Index1 + ((Index2 - Index1) >> 1);
				if (rotateArray[Index1] == rotateArray[Index2] && rotateArray[Index2] == rotateArray[IndexMid])
				{
				  return GetMin(rotateArray);
					
				}

			if (rotateArray[IndexMid] >= rotateArray[Index1])
				Index1 = IndexMid;
			if (rotateArray[IndexMid] <= rotateArray[Index2])
				Index2 = IndexMid;

		}
		return rotateArray[IndexMid]; 
	}
};

int main()
{
	Solution s;
	vector<int> a = {3,4,5,1,2};
	s.minNumberInRotateArray(a);
    return 0;
}

