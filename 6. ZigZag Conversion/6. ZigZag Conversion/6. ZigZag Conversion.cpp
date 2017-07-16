// 6. ZigZag Conversion.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1) return s;
		string *res = new  string[numRows];  // ����ʱ�����ڶ���
		int i = 0, j, gap = numRows - 2;

		while(i<s.size()){

			for (j = 0;i < s.size() && j < numRows;++j) res[j] += s[i++]; //��ѭ��

			for (j = gap; i < s.size() && j > 0; --j) res[j] += s[i++]; //б��,ȥ����һ�У����һ��
			
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

