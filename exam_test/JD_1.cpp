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
    long long int n;cin>>n;long long int x = 0, old, i=1;
    while(true){
        x += i;
        
        if (n<=x){
            cout<<i<<endl;break;
        }
        i++;
    }
    return 0;
    
}