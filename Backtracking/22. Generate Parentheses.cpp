#include <iostream>
#include <vector>
using namespace std;

void excute(vector<string>& res, int open,int close, int n, string ss){
    if(ss.size()>=n*2){
        res.push_back(ss); cout<<ss<<endl;
        return;
    }
    else{
        if(open<n){
            excute(res,open+1,close,n,ss+'(');
        }
        if(close<open){
            excute(res,open,close+1,n,ss+')');
        }
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    excute(res,0,0,n,"");
    return res;
}


int main()
{
    generateParenthesis(3);
    cout << "Hello world!" << endl;
    return 0;
}
