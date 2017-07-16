// test_gy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int num;
int gudian;
int out_id[100];
int out_c = 0;
struct character {
	int   id;
	char  s[10];
	int  height;
};

character* get_data(void)
{
	cin >> num;   //总人数
	character* data;
	data = new character[num];

	for (int i = 0;i < num;i++)
	{
		cin >> data[i].id >> data[i].s>> data[i].height;	
	}
	cin >> gudian;
	return data;
}

void put_in(deque<character> &Circle, character* male, character* female,int male_c,int female_c ) {
	character peo;
	int i, j;i = 0;j = 0;	
	peo = female[i];
	for (int n = 0;n<num;n++) {	

		Circle.push_back(peo);
		if (i >= female_c)
		{
			peo = male[j];
			j++;
		}
		else if(j>=male_c)
		{
			peo = female[i];
			i++;
		}
		else if (female[i + 1].height <= male[j].height)
		{
			i++;
			peo = female[i];
		}
		else
		{
			peo = male[j];
			j++;		
		}
	}
}

int  chuanhua(character* male, character* female, int male_c, int female_c)
{
	deque<character> Circle;
	int i = 0;int tmp;
	
	put_in(Circle,male,female, male_c, female_c);

	while (Circle.size() > 1) {
	
		//对于环形队列的另一种遍历方法
		if (i + gudian >= Circle.size()) i = (i + gudian) % Circle.size();
		else i = i + gudian;
		//cout << Circle[i].id << " ";
		tmp = Circle[i].id;
		out_id[out_c] = tmp;
		out_c++;
		Circle.erase(Circle.begin() + i);
	}

	return  tmp;

}


int final_id(void)
{
	int i = 0;
	sort(out_id, out_id + out_c);
	for ( i = 0;i < num;i++)
		if ((i + 1) != out_id[i])
			break;
	return (i+1);
}

int cmp(character a, character b) {
	return a.height < b.height;//或者其他
}

void sort_data(character* data)
{
	character* male;
	character* female;

	int male_c=0;
	int female_c=0;
	for (int i = 0;i < num;i++)
	{
		if (data[i].s == "male")
			male_c++;
		else
			female_c++;
	}
	male = new character[male_c];
    female= new character[female_c];

	male_c = 0;
	female_c = 0;

	for (int i = 0;i < num;i++)
	{
		if (data[i].s == "male")
		{
			male[male_c] = data[i];
			male_c++;
		}
		else
		{
			female[female_c] = data[i];
			female_c++;
		}
	}

	sort(male, male + male_c, cmp);
	sort(female, female + female_c, cmp);

	chuanhua(male,female, male_c, female_c);



	delete[] male;
	delete[] female;

}

int main()
{
	character* data;
	int id;
	data=get_data();
	sort_data(data);
	id=final_id();
	cout << id;
	delete[] data;
    return 0;
}

