#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <list>
#include <queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int> q;
    for(int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    cout<<q.front();
    q.pop();
    while(!q.empty()){
        int a = q.front();
        q.push(a);
        q.pop();
        if (!q.empty()) {
            int b = q.front();
            q.pop();
            cout<<" "<<b;
        }
    }
    cout<<endl;
    return 0;
}