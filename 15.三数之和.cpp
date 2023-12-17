/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
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
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if(i==0 || nums[i]>nums[i-1]) {
                int k = nums.size() - 1;
                for (int j = i+1; j < nums.size(); j++)
                {
                    if(j==i+1 || nums[j] > nums[j-1]) {
                        while (k>j && nums[i] + nums[j] + nums[k] > 0)
                            k--;
                        if (k!=j && nums[i] + nums[j] + nums[k] == 0) {
                            vector<int> tmp = {nums[i], nums[j], nums[k]};
                            res.push_back(tmp);
                        }
                    }
                }
                
            }
        }
        return res;
    }
};
// @lc code=end

int main() {
    vector<int> s = {-1,0,1,2,-1,-4};
    Solution().threeSum(s);

    
    return 0;
}