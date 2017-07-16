// baidu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include<cstdlib>
using namespace std;
class point {
    public:
		double x, y, z;
		char c;


};

//求三角形面积;  
//返回-1为不能组成三角形;  
double count_triangle_area(point a, point b, point c) {
	double area = -1;
	double side[3];//存储三条边的长度;  
	side[0] = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
	side[1] = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2) + pow(a.z - c.z, 2));
	side[2] = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2) + pow(c.z - b.z, 2));

	//不能构成三角形;  
	if (side[0] + side[1] <= side[2] || side[0] + side[2] <= side[1] || side[1] + side[2] <= side[0]) return area;

	//利用海伦公式。s=sqr(p*(p-a)(p-b)(p-c));   
	double p = (side[0] + side[1] + side[2]) / 2; //半周长;  
	area = sqrt(p*(p - side[0])*(p - side[1])*(p - side[2]));
	return area;
}


void get_point()
{
	char flag;
	while ((flag = getchar()) != EOF) {
		putchar(flag);
		string tmpStr;
		vector<double> buff;
		char c;
		while ((c = getchar()) != '\n') {
			if (c != ' ')
				tmpStr.push_back(c);
			else {
				if (tmpStr != "") {
					buff.push_back(strtod(tmpStr.c_str(),NULL));
					tmpStr = "";
				}
			}
		}
		if (tmpStr != "")
			buff.push_back(strtod(tmpStr.c_str(),NULL));
		for (auto a : buff)
			cout << a << ' ';
		cout << '\n';
	}

}

class solution{





};

int main()
{

    return 0;
}

