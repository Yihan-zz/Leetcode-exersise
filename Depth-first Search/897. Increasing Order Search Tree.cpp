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

TreeNode* increasingBST(TreeNode* root){
    if (root==NULL) {
        return NULL;    
    }
    TreeNode* right = increasingBST(root->right);
    TreeNode* left = increasingBST(root->left);
    root->right = right;
    root->left = NULL;
    TreeNode* res = root;
    if(left!=NULL){
        res = left;
        while(left->right){
            left = left->right;
        }
        left->right = root;
    }
    
    return res;
    
}