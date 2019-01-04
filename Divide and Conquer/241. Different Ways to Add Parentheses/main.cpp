#include <iostream>
#include <vector>
using namespace std;
//回溯法
vector<int> diffWaysToCompute(string input) {
    vector<int> res;
    bool flag=false;
    for(int i=0;i<input.size();i++){
        vector<int> l,r;
        if(input[i]=='+'||input[i]=='-'||input[i]=='*'){
            flag=true;
            l=diffWaysToCompute(input.substr(0,i));
            r=diffWaysToCompute(input.substr(i+1));
            for(int x:l){
                for(int y:r){
                    if(input[i]=='+')
                        res.push_back(x+y);
                    else if(input[i]=='-')
                        res.push_back(x-y);
                    else
                        res.push_back(x*y);
                }
            }
        }
    }
    if(!flag)
        res.push_back(atoi(input.c_str()));
    return res;
}
//动态规划 随便写了一下。。。。
vector<int> diffWaysToCompute2(string input) {
    vector<vector<int> > m; int N=input.size();
    for(int i=0;i<N;i+=2) m[i][i]=atoi(input.substr(i,1).c_str());
    for(int r=3;r<;r+=2){
        for(int from=0;from+r<N;from+=2){
            int to=from+r;
            vector<int> q;
            for(int j=from+1;i<to;j+=2){
                vector<int> l=m[from][j+1];
                vector<int> r2=m[j+2][to];
                for(int x:l){
                    for(int y:r2){
                        if(input[i]=='+')
                            q.push_back(x+y);
                        else if(input[i]=='-')
                            q.push_back(x-y);
                        else
                            q.push_back(x*y);
                    }
                }
            }
            m[from][to]=q;
        }
    }

    return res;
}
int main()
{
    vector<int> res=diffWaysToCompute("2*3-4*5");
    for(int i:res) cout<<i<<" ";
    cout << "Hello world!" << endl;
    return 0;
}
