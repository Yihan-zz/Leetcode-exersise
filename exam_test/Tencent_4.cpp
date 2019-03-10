#include <map>
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
vector<string> getGray(int n) {
    vector<string> res;
    if(n==1){
        res.push_back("0");
        res.push_back("1");
        return res;
    }
    vector<string> vs = getGray(n-1);
    for(auto s : vs){
        string ss = "0" + s;
        res.push_back(ss);
    }
    for(int i = vs.size()-1; i >= 0; i--)
    {
        string ss = "1" + vs[i];
        res.push_back(ss);
    }
    return res;
}
int main(){
    vector<string> res = getGray(3);
    return 0;
}
