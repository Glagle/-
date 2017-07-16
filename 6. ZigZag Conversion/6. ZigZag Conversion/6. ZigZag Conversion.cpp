// 6. ZigZag Conversion.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1) return s;
		string *res = new  string[numRows];  // 运行时分配在堆上
		int i = 0, j, gap = numRows - 2;

		while(i<s.size()){

			for (j = 0;i < s.size() && j < numRows;++j) res[j] += s[i++]; //行循环

			for (j = gap; i < s.size() && j > 0; --j) res[j] += s[i++]; //斜边,去掉第一行，最后一行
			
		}

		string str = "";
		for (i = 0;i < numRows;i++)
			str += res[i];
		return str;
	}
};


int main()
{
    return 0;
}

