// Median of Two Sorted Arrays.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
using namespace std;

/******暴力********/
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> nums3;
		nums3.resize(nums1.size() + nums2.size());
		//sort(nums1.begin(), nums1.end());
		//sort(nums2.begin(), nums2.end());
		merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
		sort(nums3.begin(),nums3.end());
		double median = (double)( (nums3.size()% 2) ? nums3[nums3.size() >> 1] :( (double)(nums3[nums3.size() >> 1] + nums3[(nums3.size() - 1)>>1] )/(double)2 ) ); //注意类型转换
		return median;
	}
};


/****两个指针方法****/

int main()
{



    return 0;
}

