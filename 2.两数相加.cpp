/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */
//Definition for singly-linked list.
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
#include <string>
#include "math.h"
using namespace std;
class Solution {
public:
    /* 会遇到big number 无法用int来表示
    int get_len(ListNode* l) {
        int len = 0;
        while (l !=  nullptr) {
            len++;
            l = l->next;
        }
        return len;
    }
    int getNumber(ListNode* l, int len) {
        int res = 0;
        for (int i = 0; i < len; i++)
        {
            res += l->val * pow(10, i);
            l = l->next;
        }
        return res;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len_1 = get_len(l1);
        int len_2 = get_len(l2);
        int num_1 = getNumber(l1, len_1);
        int num_2 = getNumber(l2, len_2);
        int num_3 = num_1 + num_2;
        string string_3 = to_string(num_3);
        int len_3 = string_3.size();
        ListNode *res = new ListNode(string_3[0]-'0');
        for (int i = 1; i < len_3; i++)
        {
            res = new ListNode(string_3[i]-'0', res);
        }
        return res;
    }
    */
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int num1, num2, num3;
        ListNode* start = new ListNode(0);
        ListNode* res = start;
        while (l1 != nullptr || l2 != nullptr)
        {
            num1 = (l1 == nullptr)? 0 : l1->val;
            l1 = (l1 == nullptr)? l1 : l1->next;
            num2 = (l2 == nullptr)? 0 : l2->val;
            l2 = (l2 == nullptr)? l2 : l2->next;
            num3 = num1+num2+carry;
            carry = num3 / 10;
            num3 = num3 % 10;
            ListNode* tmp = new ListNode(num3);
            res->next = tmp;
            res = tmp;

        }
        if (carry == 1){
            ListNode* tmp = new ListNode(1);
            res->next = tmp;
            res = tmp;
        }
        return start->next;
    }
};
// @lc code=end
int main() {

    ListNode a_1(3);
    ListNode a_2(4, &a_1);
    ListNode a_3(2, &a_2);

    ListNode b_1(4);
    ListNode b_2(6, &b_1);
    ListNode b_3(5, &b_2);

    ListNode* res = Solution().addTwoNumbers(&a_3, &b_3);

    while (res !=  nullptr) {
        cout<<res->val<<endl;
        res = res->next;
    }
    
    return 0;
}