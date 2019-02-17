#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> deckRevealedIncreasing(vector<int>& deck) {
    int N = deck.size();
    vector<int> res;
    sort(deck.begin(), deck.end());
    queue<int> q;
    for(int i = 0; i < N; i++){
        q.push(i);
    }
    for(int i=0;i<N;i++){
        res.push_back(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
    }
    vector<int> res2(N,-1);
    for(int i = 0; i < N; i++)
    {
        res2[res[i]]=deck[i];
    }
    
    return res2;
}
int main(){
    int a[7]={17,13,11,2,3,5,7};
    vector<int> b(a,a+7);
    vector<int> res = deckRevealedIncreasing(b);
    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
}