/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
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
        map<int, bool> label;
        for (int i = first; i < nums.size(); i++)
        {
            if (label.find(nums[i]) == label.end()) {
                label[nums[i]] = true;
                swap(nums[i], nums[first]);
                backward(nums, res, first + 1, len);
                swap(nums[i], nums[first]);
            }
            
        }
        return res;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        return backward(nums, res, 0, nums.size());
    }
};
// @lc code=end


int main() {
    vector<int> s = {1,1,2};
    int target = 7;
    Solution().permuteUnique(s);

    
    return 0;
}