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
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x; cin>>x; v.push_back(x);
    }
    vector<int> dp(n,0);
    vector<int> use(n,0);
    use[0]=1;use[1]=1;
    if(n<=2){
        cout<<0<<endl; return 0;
    }
    else{
        cout<<1<<endl; return 0;
    }
    for(int i = 2; i < n; i++)
    {
        if(use[i-2]==0){
            int x1 = dp[i-2]+dp[i];
        }
        
        int x2 = dp[i-1]+dp[i];
        
    }
    
    
}