// Longest Substring Without Repeating Characters.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <unordered_map>

using namespace std;


/******最大窗口方法******/
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int n = s.length();
		set<char> se ;
		set<char>::iterator it;
		int ans = 0, i = 0, j = 0;
		while (i<n && j<n)
		{
			it=se.find(s[j]);
			if (it != se.end())        //已找到，窗口右边界不动
			{
				se.erase(s[i++]);     //右移窗口左边界，同时指针指向下一个char
			}
			else                       //未找到
			{		
				se.insert(s[j++]);       //插入，增加窗口右边界，同时补1
				ans = max(ans, j - i);  //保存最大窗口值
			}
		}
		return ans;
	}
};


/******最大窗口方法（优化）******/
//当j指向的字符重复时，i不需要一个一个步进，可以直接跳到重复的 j'+1
//因此需要建立索引，使用hash表​​
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int n = s.length();
		unordered_map<char, int> hash_map;
		unordered_map<char, int>::iterator it;

		int ans = 0, i = 0, j = 0;
		for (i=0,j=0;j<n;j++)
		{
		   it=hash_map.find(s[j]);
		   if (it != hash_map.end())    //已经在map里
		   {

			   i = max(i,(it->second)+1);

		   }

			   hash_map[s[j]] = j;
			   ans = max(ans, j - i + 1);
	
		}
		return ans;
	}
};





int main()
{

    return 0;
}

