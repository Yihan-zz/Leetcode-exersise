/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return head;
        ListNode* dummy = new ListNode(0, head);
        ListNode* cur = dummy;
        while (cur->next && cur->next->next)
        {
            if (cur->next->val == cur->next->next->val)
            {
                int x = cur->next->val;

                while (cur->next && cur->next->val == x)
                {
                    cur->next = cur->next->next;
                }
            } else {
                cur = cur->next;
            }            
        }
        
        return dummy->next;
    }
};
// @lc code=end

int main() {
    // vector<int> s = {1,1,2};
    // string s1 = "999";
    // string s2 = "999";
    int num = 3;
    int target = 7;
    Solution().deleteDuplicates(new ListNode(1));

    
    return 0;
}