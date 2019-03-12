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
    vector<int> v;
    map<int,int> mm;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int x;cin>>x;v.push_back(x);
        mm[x]=i+1;
        if(i>0){
            map<int,int>::iterator it = mm.find(x) ;int min=INT32_MAX;int index=0;
            if(it!=mm.begin())
            {
                it--;
                int d = it->first;
                 min = abs(d-x);
                 index = it->second;
                it++;it++;
            }
            else{
                it++;
            }
            
            int next;
            if(it!=mm.end()){
                next= it->first;
                int del = abs(next-x);

                if(del<min){
                    min=del;
                    index=it->second;
                }
                
                
            }
            cout<<min<<" "<<index<<endl;
        }
    }
    return 0;
    
}