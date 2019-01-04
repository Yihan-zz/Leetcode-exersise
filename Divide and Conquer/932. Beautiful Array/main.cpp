#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<int, vector<int>> m;
vector<int>  excute(int N){

    if(m.find(N)!=m.end()){
        return m[N];
    }
    else{
        vector<int> q;
        if(N==1){
            q.push_back(1);
        }
        else{

            for(auto x:excute((N+1)/2))
                q.push_back(x*2-1);
            for(auto x:excute((N)/2))
                q.push_back(x*2);
        }
        m[N]=q;
        return q;
    }
}

vector<int> beautifulArray(int N) {

    vector<int> res= excute(N);

    return res;
}
int main()
{
    vector<int> x=beautifulArray(22);
    for(auto a:x) cout<<a<<" ";
    return 0;
}
