/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include "math.h"
using namespace std;
class Solution {
public:
    int binary_sort(vector<int> nums, int target, bool lower) {
        int left = 0;
        int res = nums.size();
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] > target || (lower && nums[mid] >= target))
            {
                res = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return res;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binary_sort(nums, target, true);
        int right = binary_sort(nums, target, false) - 1;
        if (left < 0 or right < 0 or left > right) {
            left = -1;
            right = -1;
        }
        return vector<int>{left, right};
    }
};
// @lc code=end

int main() {
    vector<int> s = {1};
    int target = 1;
    Solution().searchRange(s, target);

    
    return 0;
}