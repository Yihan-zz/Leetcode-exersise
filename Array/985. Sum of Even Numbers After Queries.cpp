#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
    vector<int> res;
    for(auto q : queries){
        int val = q[0];
        int index = q[1];
        A[index] += val;
        int sum=0;
        for(int i = 0; i < A.size(); i++){
            if (A[i]%2==0) {
                sum+=A[i];
            }
        }
        res.push_back(sum);        
    }
    return res;
}


int main(){
    int a[7]={17,13,11,2,3,5,7};
    vector<int> b(a,a+7);
    vector<int> res = sumEvenAfterQueries(b);
    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
}