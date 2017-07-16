// 程序员白皮书.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <bitset>
#include <unordered_map>
using namespace std;

//题一，字符出现次数唯一
bool isunique(string &s)
{
	bitset<256> hashmap;
	for (int i=0;i < s.size();i++)
	{
		if (hashmap[(int)s[i]])
			return false;
		hashmap[(int)s[i]] = 1;
	}
	return true;

}


//题二，字符串可互相置换
bool isPermutation(string &a, string &b)
{
	unordered_map<char,int> hash_a;
	unordered_map<char,int> hash_b;

	if (a.size() != b.size())
		return false;
	for (int i = 0;i < a.size();i++)
	{
		hash_a[a[i]]++;
		hash_b[b[i]]++;
	}
	if (hash_a.size() != hash_b.size())
		return false;
	unordered_map<char, int>::iterator it;
	for (it = hash_a.begin();it != hash_a.end();it++)
	{
		if (it->second != hash_b[it->first])
			return false;
	}
	return true;

}


int main()
{
	string a = "9b";
	string b = "b90";
	//cout << isunique(a) << endl;
	//cout << (int)(a[0])<< endl;
	cout << isPermutation(a, b) << endl;
    return 0;
}

