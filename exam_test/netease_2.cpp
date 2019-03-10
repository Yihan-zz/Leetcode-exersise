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
    
    int n,m;
    cin>>m>>n;
    vector<int> know;
    vector<int> wake;
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        know.push_back(x);
    }
    for(int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        if(x==1)
            sum+=know[i];
        wake.push_back(x);
    }
    int max = 0;
    if(m<=n) {
        for(int i = 0; i < m; i++)
        {
            max+=know[i];
        }
    }
    else{
        for(int i = 0; i < n; i++)
        {
            if(wake[i]==0)
                sum+=know[i];
        }
        int j = n;
        for(int i=1;j<m;i++){
            if(wake[i-1]==0)
                sum-=know[i-1];
            if(wake[j]==0)
                sum+=know[j];
            j++;
            if(sum>max) max=sum;
        }
    }
    
    cout<<max<<endl;
    return 0;
}