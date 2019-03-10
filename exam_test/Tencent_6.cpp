#include <map>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long int n,m;
    cin>>n; vector<long long int> v;
    for(int i = 0; i < n; i++)
    {
        cin>>m;v.push_back(m);
    }
    sort(v.begin(),v.end()); bool niuniu = true;
    long long int res = 0, nS = 0, yS = 0;
    for(int i = v.size()-1; i >=0 ; i--)
    {
        if (niuniu) {
            nS += v[i];
        }
        else
        {
            yS += v[i];
        }
        niuniu = !niuniu; 
        
    }
    
    cout<<nS-yS;
    cout<<endl;
    
    return 0;
}