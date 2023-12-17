/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include "math.h"
using namespace std;
// @lc code=start
class Solution {
public:
    //s[i,j] = s[i+1, j-1]&&(s[i]==s[j])
    string longestPalindrome(string s) {
        vector<vector<int>> res(s.size(), vector<int>(s.size(), 0));
        int max_res = 1;
        string res_s = s.substr(0, 1);
        for (int i = 0; i < s.size(); i++)
            res[i][i] = 1;

        for (int z = 1; z < s.size(); z++)
        {
            for (int i = 0; i < s.size(); i++)
            {
                int j = i + z;
                if (j>=s.size()) continue;
                if (i+1==j)
                {
                    if (s[i]==s[j])
                    {
                        res[i][j] = 2;
                        if (2 > max_res)
                        {
                            max_res = 2;
                            res_s = s.substr(i, max_res);
                        }
                    }
                }
                if ((i + 1 <= j - 1))
                {
                    if (res[i+1][j-1] > 0 && s[i]==s[j])
                    {
                        res[i][j] = res[i+1][j-1]+2;
                        if (j-i+1 > max_res)
                        {
                            max_res = j-i+1;
                            res_s = s.substr(i, max_res);
                        }
                    }
                    
                }
                
            }
            
        }
        return res_s;
    }
};
// @lc code=end

int main() {
    string s = "aaaa";
    string res = Solution().longestPalindrome(s);

    
    return 0;
}