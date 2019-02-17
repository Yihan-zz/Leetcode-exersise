#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sortArrayByParity(vector<int>& A) {
    vector<int> res;
    res.push_back(A[0]);
    if (A.size()<=1) {
        return res;
    }
    int pos=0;
    for(int i = 1; i < A.size(); i++)
    {
        if (A[i]%2==0) {
            res.insert(res.begin() + pos, A[i]);pos++;
        }
        else{
            res.insert(res.begin() + pos+1, A[i]);
        }
        
    }
    return res;
}
int main(){
    int a[4]={3,1,2,4};
    vector<int> b(a,a+4);
    vector<int> res = sortArrayByParity(b);
    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
}