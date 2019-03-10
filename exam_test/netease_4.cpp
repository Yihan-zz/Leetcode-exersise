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
    int m,n;
    cin>>m>>n;
    vector<int> v;
    map<int, int> mapp;
    int index=-1;
    map<int, int> map_flag;
    bool ff=true;
    for(int i = 0; i < m; i++)
    {
        int x;cin>>x;
        v.push_back(x);
        if(x==0) continue;
        mapp[x]+=1;
        if(mapp.size()==n && ff){ ff= false;index=i;}
    }
    if(index==-1){
        cout<<-1<<endl;
        return 0;
    }
    int res=0;
    for(int i = index; ; i--)
    {
        if(v[i]!=0){
            map_flag[v[i]] = 1;
        }
        res++;
        if(map_flag.size()==n){
            cout<<res<<endl;
            return 0;
        }
    }
    return 0;
}