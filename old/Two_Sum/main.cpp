#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int size=nums.size();
    vector<int> result;
    for(int i=0;i<size;i++)
    {
        int rest=target-nums[i];
        for(int j=0;j<size;j++)
        {
            if(i==j) continue;
            if(rest==nums[j])
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
}
int main()
{
    vector<int> a;
    vector<int> b;
    a.push_back(2);a.push_back(7);a.push_back(11);a.push_back(15);
    b=twoSum(a,9);
    cout<<b[0]<<" "<<b[1]<<endl;
    return 0;
}
