#include <iostream>
#include <vector>
using namespace std;
int rob(vector<int>& nums) {
    int n=nums.size();
    vector<int> m(n);
    if(n==0) return 0;
    if(n==1) return nums[0];
    if(n==2) return max(nums[0],nums[1]);
    m[0]=nums[0];
    m[1]=max(nums[0],nums[1]);

    for(int i=2;i<n;i++){
        m[i]=max(m[i-2]+nums[i],m[i-1]);
    }
    return m[n-1];
}
int main()
{
    int a[]={1,2,3,1};
    vector<int> nums(a,a+4);
    cout<<rob(nums);

    return 0;
}
