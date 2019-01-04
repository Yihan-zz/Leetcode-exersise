#include <iostream>
#include <vector>
using namespace std;
double findkth(vector<int>& nums1, vector<int>& nums2,int start1,int start2,int len1,int len2,int k)
{
    if(len1>len2)
        return findkth(nums2,nums1,start2,start1,len2,len1,k);
    if(len1==0)
        return nums2[start2+k-1];
    if(k==1)
        return min(nums1[start1],nums2[start2]);
    int p1=min(k/2,len1);
    int p2=k-p1;
    if(nums1[start1+p1-1]>nums2[start2+p2-1])
    {
        return findkth(nums1,nums2,start1,start2+p2,len1,len2-p2,k-p2);
    }
    if(nums1[start1+p1-1]<nums2[start2+p2-1])
    {
        return findkth(nums1,nums2,start1+p1,start2,len1-p1,len2,k-p1);
    }
    else
        return nums1[start1+p1-1];
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    int len1=nums1.size();
    int len2=nums2.size();
    int m=len1+len2;
    if(m%2==0)
    {
        return (findkth(nums1,nums2,0,0,len1,len2,m/2)+findkth(nums1,nums2,0,0,len1,len2,m/2+1))/2;
    }
    else
    {
        return findkth(nums1,nums2,0,0,len1,len2,m/2+1);
    }
}

int main()
{
    int a[2]={1,2};
    int b[2]={3,4};
    vector<int> nums1(a,a+2);
    vector<int> nums2 (b,b+2);
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;
}
