#include <iostream>
#include <vector>
using namespace std;
int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    vector<int> m(n);
    if(n==2) return min(cost[0],cost[1]);
    m[0]=0;
    m[1]=min(cost[1],cost[0]);
    for(int i=2;i<n;i++){
        m[i]=min(m[i-1]+cost[i],m[i-2]+cost[i-1]);
        //cout<<m[i]<<endl;
    }
    return m[n-1];
}
int main()
{
    int a[]={10, 15, 20};
    vector<int> nums(a,a+3);
    cout<<minCostClimbingStairs(nums);
    return 0;
}
