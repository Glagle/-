// 5.Longest Palindromic Substring.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;


/*****��̬�滮******/
class Solution {
public:
	string longestPalindrome(string s) {
		const int length = s.size();
		int start=0,maxlength=1;
		bool p[1000][1000] = { false };
		for(int i=0;i<length;i++)
		{
			p[i][i] = true;   //ÿ����ĸ������ǻ���
			if (i < length - 1 && (s[i] == s[i + 1]))
			{
				p[i][i + 1] = true;      //������ͬ����ĸ���ܹ��ɻ���
				maxlength = 2;
				start = i;

			}	
		}

		for (int len = 3;len <= length;len++)   //ÿ�����ȱ���һ��
		{
			for (int i = 0;i <= length-len;i++)
			{
				int j = i + len - 1;
				if (p[i + 1][j - 1] && s[i] == s[j])
				{
					p[i][j]=true;      //���¼���������Ϣ
					maxlength = j-i+1;
					start = i;         //��ͬ�����±����������õ���iֵ
								
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

