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
int main(){
    long long int n; cin>>n; int count = 0;
    for(long long int i = 1; i <= n; i++)
    {
        for(long long int j = 1; j <= n; j++)
        {
            for(long long int k = 1; k <= n; k++)
            {
                long double d = pow(i,j);
                long double x = k;
                long long int dd = pow(d,1/x);
                long double z = dd;
                long double y = pow(z,x);
                if (y==d && dd<=n) {
                    count++;
                }
                
            }
            
        }
    }
    cout<<count<<endl;
    return 0;
}