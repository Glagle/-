// 7. Reverse Integer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int N;
class Solution {
public:
	void third_cat(int* cat, int num) {

		//sort(cat,cat+num);
		set<int> myset;

		for (int i = 0;i < num;i++)  //set����������ȥ��
		{
			myset.insert(cat[i]);
		}
		set<int>::iterator it = myset.begin();  //����������Ҫ����set��ֵ��

		if (myset.size() >= 3)    //�е�������
		{
			it++;
			cout << *(++it);
		}

		else
		{
			cout << -1;
		}
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
	int* cat;
	Solution s;
	cat=get_number();

	//for (int i = 0;i < N;i++)
	//{
	//	cout<< cat[i]<<" ";
	//}

	s.third_cat(cat, N);

	delete[] cat;

	system("PAUSE");
    return 0;
}

