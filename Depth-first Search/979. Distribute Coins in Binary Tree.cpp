#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
#include <math.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int ans;
int distributeCoins(TreeNode* root) {
    ans = 0;
    dfs(root);
    return ans;
}
int dfs(TreeNode* root) {
    if(root == NULL) return 0;
    int L = dfs(root->left);
    int R = dfs(root->right);
    ans += abs(L)+abs(R);
    return root->val+L+R-1;
}