/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
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
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int res = 0;
        if (target > nums[right])
            return right + 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] >= target) {
                right = mid - 1;
                res = mid;
           } else {
                left = mid + 1;
           }

        }
        
        
        return res;
    }
};
// @lc code=end

int main() {
    vector<int> s = {1,3,5,6};
    int target = 7;
    Solution().searchInsert(s, target);

    
    return 0;
}