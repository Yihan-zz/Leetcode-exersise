#include <iostream>
#include <vector>
using namespace std;
bool check(const vector<string>& A, int i){
    char c=A[0][i];
    for(auto s:A){
        if(s[i]<c) return false;
        else
            c=s[i];
    }
    return true;
}

int minDeletionSize(vector<string>& A) {
    int res=0;
    if(A.size()==0) return 0;
    int num=A[0].size();
    for(int i=0;i<num;i++){
        if(!check(A,i))
            res++;
    }
    return res;

}
int main()
{
    vector<string> A;
    A.push_back("a");A.push_back("b");//A.push_back("ghi");

    cout << minDeletionSize(A) << endl;
    return 0;
}
