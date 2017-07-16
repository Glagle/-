// 5.Longest Palindromic Substring.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


/*****动态规划******/
class Solution {
public:
	string longestPalindrome(string s) {
		const int length = s.size();
		int start=0,maxlength=1;
		bool p[1000][1000] = { false };
		for(int i=0;i<length;i++)
		{
			p[i][i] = true;   //每个字母自身就是回文
			if (i < length - 1 && (s[i] == s[i + 1]))
			{
				p[i][i + 1] = true;      //两个相同的字母才能构成回文
				maxlength = 2;
				start = i;

			}	
		}

		for (int len = 3;len <= length;len++)   //每个长度遍历一遍
		{
			for (int i = 0;i <= length-len;i++)
			{
				int j = i + len - 1;
				if (p[i + 1][j - 1] && s[i] == s[j])
				{
					p[i][j]=true;      //更新检索到的信息
					maxlength = j-i+1;
					start = i;         //相同长度下保存最后检索得到的i值
								
				}
			}
		}
		return s.substr(start,maxlength);

	}
};



int main()
{
    return 0;
}

