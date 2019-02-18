#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
#include <math.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
int getDepth(Node* root){
    if (root==NULL) {
        return 0;
    }
    
    vector<Node*> chi = root ->children;
    int max = 0;
    for(auto x:chi){
        int depth = getDepth(x);
        if (depth>max) {
            max=depth;
        }
    }
    return max+1;
}
int maxDepth(Node* root) {
    return getDepth(root);
    
}