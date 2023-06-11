/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res = {0, 0};
        map<int, int> mapTabel;
        for (int i = 0; i < nums.size(); i++)
        {
            mapTabel[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++)
        {   
            map<int, int>::iterator it = mapTabel.find(target - nums[i]);
            if (it != mapTabel.end() && it->second != i) {
                res[0] = i;
                res[1] = mapTabel[target - nums[i]];
                return res;
            }
        }
        return res;
    }
};
// @lc code=end
int main() {
    vector<int> nums = {1,1,1,1,1,4,1,1,1,1,1,7,1,1,1,1,1};
    int target = 11;

    vector<int> res = Solution().twoSum(nums, target);

    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<endl;
    }
    
    return 0;
}
