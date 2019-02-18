#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;
vector<string> subdomainVisits(vector<string>& cpdomains) {
    map<string, int> hash;
    for(auto str : cpdomains){
        int pos =  str.find(' ') ;
        string ss = str.substr(0,pos);
        int num = atoi(ss.c_str());
        int dot_pos = pos;
        while(dot_pos != string::npos){
            ss = str.substr(dot_pos+1);
            if(hash.find(ss) != hash.end()){
                hash[ss] += num;
            }
            else hash[ss] = num;
            dot_pos = str.find_first_of('.',dot_pos+1);
        }
    }
    vector<string> res;
    auto it = hash.begin();
    while(it != hash.end()){
        int num = it->second;
        string ss = it->first;
        res.push_back(to_string(num)+" "+ss);
        it++;
    }
    return res;    
}
vector<string> subdomainVisits(vector<string>& cpdomains) {
    unordered_map<string, int> c;
    for (auto cd : cpdomains) {
        int i = cd.find(" ");
        int n = stoi(cd.substr (0, i));
        string s = cd.substr (i + 1, cd.size () - i - 1);
        for (int i = 0; i < s.size(); ++i) if (s[i] == '.') c[s.substr(i + 1, s.size () - i)] += n;
        c[s] += n;
    }
    vector<string> res;
    for (auto k : c) res.push_back (to_string(k.second) + " " + k.first);
    return res;
}
int main(){
    string s = "9001 discuss.leetcode.com";
    vector<string> b;b.push_back(s);
    vector<string> res = subdomainVisits(b);
    
    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
}
