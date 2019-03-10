#include <map>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int n,m; cin>>n>>m;
    double x = pow(2,n-1);
    int y = x - 1;

    
    cout<<m-y;
    cout<<endl;
    
    return 0;
}