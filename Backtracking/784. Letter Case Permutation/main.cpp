#include <iostream>
#include <vector>
using namespace std;

void excute(string S,vector<string>& retsult,int i){
    if(i>=S.size()){
        retsult.push_back(S);return;
    }
    else{
        excute(S,retsult,i+1);
        if(S[i]>='a'&&S[i]<='z'){
            S[i]=S[i]+'A'-'a';
            excute(S,retsult,i+1);
            return;
        }
        else if(S[i]>='A'&&S[i]<='Z'){
            S[i]=S[i]+'a'-'A';
            excute(S,retsult,i+1);
            return;
        }
    }
}
vector<string> letterCasePermutation(string S) {
    int n=S.size();
    int i=0;
    vector<string> retsult;
    excute(S,retsult,i);

    return retsult;
}
int main()
{
    string S = "12345";letterCasePermutation(S);

    return 0;
}
