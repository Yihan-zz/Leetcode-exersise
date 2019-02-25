#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<int> largestValues(TreeNode* root) {
    queue<TreeNode*> q;
    vector<int> res;
    if (root==NULL) {
        return res;
    }
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        int max = INT32_MIN;
        for(int i = 0; i < size; i++)
        {
            TreeNode* node = q.front();
            q.pop();
            int val = node->val;
            if (val>max) {
                max = val;
            }
            if (node->left != NULL) {
                q.push(node->left);
            }
            if (node->right != NULL) {
                q.push(node->right);
            }
        }
        res.push_back(max);
    }
    return res;
}