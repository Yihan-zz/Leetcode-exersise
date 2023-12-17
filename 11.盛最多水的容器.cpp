/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include "math.h"
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int res = 0;
        int i = 0;
        int j = len - 1;
        while (i != j)
        {
            int tmp = min(height[i], height[j]) * (j - i);
            if (tmp>res) res = tmp;
            if (height[i]<height[j]) i++;
            else j--;
        }
        return res;
    }
};
// @lc code=end

int main() {
    vector<int> s = {1,8,6,2,5,4,8,3,7};
    int res = Solution().maxArea(s);

    
    return 0;
}