#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> merge(vector<int> A, vector<int> B){
    int i=0,j=0;
    vector<int> res;
    while(i<A.size()&&j<B.size()){
        if(A[i]<B[j]){
            res.push_back(A[i++]);
        }
        else{
            res.push_back(B[j++]);
        }
    }
    if(i>=A.size()){
        while(j<B.size()){
            res.push_back(B[j++]);
        }
    }
    if(j>=B.size()){
        while(i<A.size()){
            res.push_back(A[i++]);
        }
    }
    return res;
}
vector<int> sortedSquares(vector<int>& A) {
    vector<int> neg;
    vector<int> pos;    
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i]<0)
            neg.push_back(A[i]*A[i]);
        else
            pos.push_back(A[i]*A[i]);
    }
    reverse(neg.begin(),neg.end());
    if(neg.empty()) return pos;
    if(pos.empty()) return neg;
    return merge(neg,pos);
}
int main(){
    int a[5]={-7,-3,2,3,11};
    vector<int> b(a,a+5);
    vector<int> res = sortedSquares(b);
    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
}