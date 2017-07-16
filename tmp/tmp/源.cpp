#include <iostream>
#include <vector>
#include <stdlib.h>
#include <assert.h>
using namespace std;

class  Solution {
public:
	int binary_search(vector<int> &a, int key)
	{
		assert(!a.empty());  //非空继续运行
		int left = 0;	
		int right = a.size() - 1;
		int mid = 0;
		while (left <= right)
		{
			mid = left + ((right - left) >> 1); //不用（left+right）/2是为了效率及防止left+right 越界,>>优先级低
			if (a.at(mid) < key)
			{
				left = mid + 1;
			}
			else if (a.at(mid) > key)
			{
				right = mid - 1;
			}
			else
				return mid;
		}
		return -1;

	}

};

int main()
{
	vector<int> a(10);
	Solution s;
	int k;
	for (int i = 0;i < 10;i++)
	{
		a.push_back(i);
	}

	k = s.binary_search(a, 4);
	cout << k << endl;
	system("pause");
	return 0;

}