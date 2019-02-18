#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int numJewelsInStones(string J, string S) {
    map<char,bool> dic;
    for( auto x : J){
        dic[x] = true;
    }
    int sum = 0;
    for(auto x : S){
        if(dic.find(x) != dic.end()){
            sum++;
        }
    }
    return sum;
}


int main(){
    string J = "z", S = "ZZ";
    //int a[7]={17,13,11,2,3,5,7};
    //vector<int> b(a,a+7);
    //vector<int> res ;
    cout<<numJewelsInStones(J,S);
    
}