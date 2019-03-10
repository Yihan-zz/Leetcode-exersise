#include <iostream>
#include <string>
#include <vector>
using namespace std;
string reverse(string s){
    string res = "";
    for(auto x : s){
        res = x + res;
    }
    return res;
}
int find_max(string s1,string s2){
    int num1 = s1.size();
    int num2 = s2.size();
    vector<vector<int>> m;
    for(int i=0;i<num1+1;i++){
        m.push_back(vector<int>(num2+1));
    }
    for(int i=1;i<num1+1;i++){
        for(int j=1;j<num2+1;j++){
            if(s1[i-1]==s2[j-1]){
                m[i][j] = m[i-1][j-1] + 1;
            }
            else{
                m[i][j] = max(m[i][j-1],m[i-1][j]);
            }
        }
    }
    return m[num1][num2];
}
int main(){
    string s;
    while(cin>>s){
        string revers = reverse(s);
        cout<<s.size()-find_max(revers,s)<<endl;
    }
}