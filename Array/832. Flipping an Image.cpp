#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    //vector<vector<int>> res;
    for(auto& x:A){
        reverse(x.begin(),x.end());
        for(int i = 0; i < x.size(); i++){
            x[i] = x[i] ^ 1;
        }
    }
    return A;
}

int main(){
    int a[5]={-7,-3,2,3,11};
    vector<int> b(a,a+5);
    vector<vector<int>> res = flipAndInvertImage(b);
    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
}