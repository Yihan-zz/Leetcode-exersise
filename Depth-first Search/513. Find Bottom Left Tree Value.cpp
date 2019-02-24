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
//BFS
int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode*> q;
    queue<int> level;
    level.push(0);
    q.push(root);
    int res = root->val;
    int max_level = 0;
    while(q.size()){
        TreeNode* front = q.front();
        int le = level.front();
        level.pop();q.pop();
        if (front->left!=NULL) {
            q.push(front->left);
            level.push(le+1);
        }
        if (front->right!=NULL) {
            q.push(front->right);
            level.push(le+1);
        }
        if (max_level!=le) {
            max_level = le;
            res = front->val;
        }
        
    }
    return res;
}
//DFS
void dfs(TreeNode* root, int& res, int& maxDeepth, int curDeepth){
    if (root==NULL) {
        return;
    }
    dfs(root->left, res, maxDeepth, curDeepth+1);
    dfs(root->right, res, maxDeepth, curDeepth+1);
    if (curDeepth>maxDeepth) {
        res = root->val;
        maxDeepth = curDeepth;
    }

}
int findBottomLeftValue2(TreeNode* root){
    int res = root->val;
    int max = 0;
    dfs(root,res,max,0);
    return res;
}