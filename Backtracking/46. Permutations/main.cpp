#include <iostream>
#include <vector>
using namespace std;
void excute(vector<vector<int> >&res, vector<int> nums, int i, int N ){
    if(i>=N){
        res.push_back(nums);
        for(auto x:nums) cout<<x<<" ";cout<<endl;
        return;
    }
    else{
        for(int j=i;j<N;j++){
            swap(nums[i],nums[j]);
            excute(res,nums,i+1,N);
            swap(nums[i],nums[j]);
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector< vector<int> > res;
    excute(res,nums,0,nums.size());
    return res;
}
int main()
{

    int x[3]={1,2,3};
    vector<int> nums(x,x+3);
    permute(nums);
    return 0;
}
