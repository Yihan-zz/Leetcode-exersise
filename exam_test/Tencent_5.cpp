#include <map>
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;
    long long int t = n/(2*m);
    int psum=0;
    for(long long int i = 1 ; i <= 2*m ; i++)    {
        long long int k=i;
        if(i<=m) k=-i;
        psum += k;
    }
    
    cout<<t*psum;
    cout<<endl;
    
    return 0;
}