// Median of Two Sorted Arrays.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
using namespace std;

/******����********/
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> nums3;
		nums3.resize(nums1.size() + nums2.size());
		//sort(nums1.begin(), nums1.end());
		//sort(nums2.begin(), nums2.end());
		merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
		sort(nums3.begin(),nums3.end());
		double median = (double)( (nums3.size()% 2) ? nums3[nums3.size() >> 1] :( (double)(nums3[nums3.size() >> 1] + nums3[(nums3.size() - 1)>>1] )/(double)2 ) ); //ע������ת��
		return median;
	}
};


/****����ָ�뷽��****/

int main()
{



    return 0;
}

