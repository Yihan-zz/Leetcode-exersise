/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
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
    // int lengthOfLongestSubstring(string s) {
    //     int length = s.size();
    //     map<char, int> char_pos;
    //     int res = 0;
    //     int cur = 0;
    //     for (int i = 0; i < length; i++)
    //     {
    //         if (char_pos.find(s[i]) ==  char_pos.end()){
    //             cur += 1;
    //             char_pos[s[i]] = i;
    //             res = (res > cur)? res:cur;
    //         } else {
    //             int pre_pos = char_pos[s[i]];
    //             for (int j = 0; j < pre_pos; j++)
    //                 char_pos.erase(s[j]);            
    //             char_pos[s[i]] = i;
    //             cur = i - pre_pos;
    //         }
    //     }
    //     return res;
    // }

     int lengthOfLongestSubstring(string s) {
        int length = s.size();
        set<char> char_set;
        int res = 0;
        int cur = 1;
        int j = 1;
        char_set.insert(s[0]);
        for (int i = 0; i < length; i++)
        {
            if (i != 0) {
                char_set.erase(s[i-1]);
                cur--;
            }
            while (j < length && char_set.find(s[j]) == char_set.end())
            {
                char_set.insert(s[j]);
                cur++;
                j++;
            }
            res = (res > cur)? res:cur;
        }
        return res;
    }
};
// @lc code=end

int main() {
    string s = "abcabcbb";
    int res = Solution().lengthOfLongestSubstring(s);

    
    return 0;
}