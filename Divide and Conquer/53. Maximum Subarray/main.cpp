#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums)
{
    int n=nums.size();
    int max=nums[0];
    int s=nums[0];
    for(int i=1;i<n;i++){
        if(s<0){
            s=nums[i];
        }
        else {
            s+=nums[i];
        }
        if(s>max) max=s;
    }
    return max;
}
int main()
{
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    vector<int> nums(a,a+9);
    cout<<maxSubArray(nums);
    int x;
    cin>>x;
    return 0;
}
