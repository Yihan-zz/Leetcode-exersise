/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
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
    // int climbStairs(int n) {
    //     if (n == 1)
    //         return 1;
    //     if (n == 2)
    //         return 2;
    //     return climbStairs(n-1) + climbStairs(n-2);
    // }
    int climbStairs(int n) {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        vector<int> res = vector<int>(n+1);
        res[1] = 1;
        res[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            res[i] = res[i-1] + res[i-2];
        }
        return res[n];
    }
};
// @lc code=end

int main() {
    // vector<int> s = {1,1,2};
    // string s1 = "999";
    // string s2 = "999";
    int num = 3;
    int target = 7;
    Solution().climbStairs(num);

    
    return 0;
}