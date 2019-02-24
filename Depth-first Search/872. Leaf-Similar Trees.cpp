#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void dfs(vector<int>&v , TreeNode* root){
    if (root == NULL) {
        return;
    }
    if (root->left==NULL && root->right== NULL) {
        v.push_back(root->val);
    }
    dfs(v,root->left);
    dfs(v,root->right);
    
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> v1;
    vector<int> v2;
    dfs(v1,root1);
    dfs(v2,root2);
    return v1==v2;
}