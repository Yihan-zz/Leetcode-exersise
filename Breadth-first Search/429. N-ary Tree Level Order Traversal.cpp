#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
#include <unordered_map>
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
vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> res;
    if (root==NULL){
        return res;
    }
    queue<Node*> q;
    q.push(root);
    queue<int> level;
    level.push(0);
    vector<int> ll;
    int now = 0;
    while(!q.empty()){
        Node* x = q.front();
        q.pop();
        int le = level.front();
        level.pop();
        if (le==now) {
            ll.push_back(x->val);
        }
        else{
            res.push_back(ll);
            ll.clear();
            now++;
            ll.push_back(x->val);
        }
        vector<Node*> chil = x->children;
        for(auto v : chil){
            q.push(v);
            level.push(le+1);
        }
    }
    res.push_back(ll);
    return res;
}
int main(){
    Node* a = new Node;a->val = 1;
    Node* b = new Node;b->val = 3;
    Node* c = new Node;c->val = 2;
    Node* d = new Node;d->val = 4;
    Node* e = new Node;e->val = 5;
    Node* f = new Node;f->val = 6;
    vector<Node*> v1;
    vector<Node*> v2;
    v1.push_back(b);v1.push_back(c);v1.push_back(d);
    v2.push_back(e);v2.push_back(f);
    a->children = v1;
    b->children = v2;
    vector<vector<int>> res = levelOrder(a);
    for(auto v : res){
        for(auto x : v){
            cout<<x<<' ';
        }
        cout<<endl;
    }
}