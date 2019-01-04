#include <iostream>
#include <vector>
using namespace std;
int climbStairs(int n) {
    vector<int> m(n);
    if(n<=2) return n;
    m[0]=1;
    m[1]=2;
    for(int i=2;i<n;i++){
        m[i]=m[i-1]+m[i-2];
    }
    return m[n-1];
}
int main()
{
    int n=3;
    cout<<climbStairs(n);

    return 0;
}
