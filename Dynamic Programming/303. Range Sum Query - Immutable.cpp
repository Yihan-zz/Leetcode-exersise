#include <iostream>
#include <vector>
using namespace std;
class NumArray {
private:
    vector<int> arr;
    vector<int> sum;
public:

    NumArray(vector<int> nums):arr(nums) {
        int n=nums.size();
        sum=vector<int>(n);
        for(int i=0;i<n;i++){
            sum[i]=arr[i]+sum[i-1];
        }

    }

    int sumRange(int i, int j) {
        return sum[j]-sum[i]+arr[i];
    }
};
int main()
{
    int a[]={-2, 0, 3, -5, 2, -1};
    vector<int> nums(a,a+6);
    NumArray* obj = new NumArray(nums);
    cout<< obj->sumRange(0,2);

    return 0;
}
