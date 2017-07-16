// 10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Solution {
public:
	int jumpFloor(int number) {
		if (number == 0)
			return 0;
		if (number == 1)
			return 1;
		int First = 1;
		int Second = 1;
		int Count = 0;
		for (int i = 2; i <=number; i++)
		{
			Count = First + Second;
			First = Second;
			Second = Count;
		}


	}
};
int main()
{
    return 0;
}

