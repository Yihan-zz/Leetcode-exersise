/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
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
    string multiply(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        string res = "";
        if (num1 == "0" or num2 == "0") {
            return string("0");
        }
        for (int i = 0; i < len1; i++)
        {
            int carry = 0;
            for (int j = 0; j < len2; j++)
            {
                int mul1 = num1[len1 - i - 1] - '0';
                int mul2 = num2[len2 - j - 1] - '0';
                int mul_res = mul1 * mul2;
                int left = mul_res % 10;
                carry = mul_res / 10;
                string::iterator index;
                if (i + j + 1 > res.size()) {
                    index = res.end() - 1 - i - j;
                    res.insert(res.begin(), left + '0');
                } else {
                    string::iterator index;
                    index = res.end() - 1 - i - j;
                    int index_num = *index - '0'; 
                    int add_left = (index_num + left) % 10;
                    *index = add_left + '0';
                    carry = carry + (index_num + left) / 10;
                }
                int k = 2;
                while (carry > 0) {
                    if (i + j + k > res.size()) {
                        index = res.end() - k - i - j;
                        res.insert(res.begin(), carry + '0');
                        break;
                    } else {
                        index = res.end() - k - i - j;
                        int index_num = *index - '0'; 
                        int add_left = (index_num + carry) % 10;
                        *index = add_left + '0';
                        carry = (index_num + carry) / 10;
                    }
                    k++;
                }
            }
            
        }
        return res;
    }
};
// @lc code=end

int main() {
    // vector<int> s = {1,1,2};
    string s1 = "999";
    string s2 = "999";
    int target = 7;
    Solution().multiply(s1, s2);

    
    return 0;
}