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
    int sum = 0;vector<int> sump;
    for(int i = 0; i < n; i++)
    {
        int a; cin>>a;
        sum+=a;
        sump.push_back(sum);
    }
    int m; cin>>m;
    for(int i = 0; i < m; i++)
    {
        int q;cin>>q;
        int high = n-1;
        int low = 0;
        int mid = (n-1)/2;
        while(high-low!=1){
            if(sump[mid]>q){
                high=mid;
                mid=(high+low)/2;
            }
            else if(sump[mid]<q){
                low=mid;
                mid=(high+low)/2;
            }
            else{
                cout<<mid+1<<endl;
                break;
            }
        }
        if(q>sump[mid]){
            cout<<mid+2<<endl;
        }
        else if(q<sump[mid]){
            cout<<mid+1<<endl;
        }
    }
    return 0;
}