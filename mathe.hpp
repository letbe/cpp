#ifndef MATHE
#define MATHE

#include <algorithm>
using namespace std;

namespace mathe {
	// G:={x:x in nums2 and for all y in nums1,x >= y}
	// tg := min G
	// to function lsup input array nums1 and nums2,it output a number tg
	template <typename T,typename T1,typename T2> T2 lsup (T nums1,T1 nums2) {
		T2 tg;
		auto max1 = nums1.begin();
		for (auto iter = nums1.begin() + 1;iter < nums1.end();++iter) {
			if (*max1 < *iter) {
				max1 = iter;
			}
		}
	sort(nums1.begin(),nums2.end());
	auto r = *max1;
	for (auto& ele : nums2) {
		if (r <= ele) 
			tg = ele;
	}
	return tg;	
	
	// G:={x:x in nums2 and for all y in nums1,x <= y}
	// tg := max G
	// to function linf input array nums1 and nums2,it output a number tg
	template <typename T,typename T1,typename T2> T2 linf (T nums1,T1 nums2) {
		T2 tg;
		auto min1 = nums1.begin();
		for (auto iter = nums1.begin() + 1;iter < num1.end();++iter) {
			if (*min > *iter)
				min = iter;
			}
		sort(nums2.begin(),nums2.end());
		auto r = *min1;
		for (auto iter = nums2.end() - 1;iter >= nums2.begin();--iter) {
			if (r >= *iter) 
				return *iter;
		}
	}
}  // mathe
#endif
