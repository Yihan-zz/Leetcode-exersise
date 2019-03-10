#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <list>
#include <queue>
#include <cmath>
using namespace std;
bool is(int x){
    if(x==2) return true;
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
    
}
int main(){
    int n;
    cin>>n;
    int count = 0;
    for(int i = 2; i <= n/2; i++)
    {
        if(is(i)&&is(n-i)) 
            count++;
    }
    cout<<count<<endl;
    
    return 0;
}