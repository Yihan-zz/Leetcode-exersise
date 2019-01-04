#include <iostream>
#include <vector>
using namespace std;

int count1(const vector<int>& arr, int x, int p, int q){
    int countx=0;
    for(int i=p;i<=q;i++){
        if(arr[i]==x) countx++;
    }
    return countx;
}
int find(const vector<int>& arr, int p, int q){
    if(p==q) return arr[p];
    int mid = (p+q)/2;
    int left=find(arr,p,mid);
    int right=find(arr,mid+1,q);
    if(left==right) return left;
    int countL=count1(arr,left,p,q);
    int countR=count1(arr,right,p,q);
    return countL>countR ? left:right;
}
int majorityElement(vector<int>& nums) {
    int n = nums.size();
    return find(nums,0,n-1);
}
int main()
{

    int a[7]={2,2,1,1,1,2,2};
    vector<int> nums(a,a+7);

    cout<<majorityElement(nums);

    return 0;
}
