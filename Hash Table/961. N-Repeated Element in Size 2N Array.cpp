#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int repeatedNTimes(vector<int>& A) {
    map<int, bool> hash;
    for(auto x : A){
        map<int, bool>::iterator it=hash.find(x);
        if(it==hash.end()){
            hash[x] = true;
        }
        else return x;
    }
}

int main(){
    int a[8]={5,1,5,2,5,3,5,4};
    vector<int> b(a,a+8);
    //vector<int> res = repeatedNTimes(b);
    cout<< repeatedNTimes(b);
    // for(int i = 0; i < res.size(); i++)
    // {
    //     cout<<res[i]<<" ";
    // }
    
}