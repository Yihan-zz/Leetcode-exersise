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
    map<int,int> mm;
    int n,m;
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        mm[i]=0;
    }
    for(int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        mm[x]+=1;
    }
    map<int,int>::iterator it = mm.begin();
    int min = INT16_MAX;

    while(it!=mm.end()){
        if(it->second<min) 
            min=it->second;
        it++;
    }
    cout<<min<<endl;
    return 0;
}