#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());//for(auto x : g) cout<<x<<" "; cout<<endl;
    sort(s.begin(),s.end());//for(auto x : s) cout<<x<<" "; cout<<endl;
    int k=0;int res=0;
    for(auto x : g){
        //cout<<x<<" "<<k<<endl;
        while(k<s.size()){
            if(s[k++]>=x){
                res++;break;
            }
        }
        if(k>=s.size()) return res;
    }
    return res;
}
int main()
{
    int a[4]={10,9,8,7};
    int b[4]={5,6,7,8};
    vector<int> g(a,a+4);
    vector<int> s(b,b+4);

    cout <<findContentChildren(g,s) << endl;
    return 0;
}
