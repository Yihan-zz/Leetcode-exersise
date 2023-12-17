/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
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
    vector<vector<int>> backward(vector<int>& nums, vector<vector<int>>& res, int first, int len) {
        if (first == len) {
            res.push_back(nums);
        }
        for (int i = first; i < nums.size(); i++)
        {
            swap(nums[i], nums[first]);
            backward(nums, res, first + 1, len);
            swap(nums[i], nums[first]);
        }
        return res;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        return backward(nums, res, 0, nums.size());
    }
};
// @lc code=end

int main() {
    vector<int> s = {1,3,5,6};
    int target = 7;
    Solution().permute(s);

    
    return 0;
}