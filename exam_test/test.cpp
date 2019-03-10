#include <map>
#include <unordered_map>
#include <iostream>
using namespace std;
int main(){
    unordered_map<int,int> m;
    m[1]=2;
    
    m[-1]=5;

    m[0]=3;
    map<int,int> m2;
    m2[1]=2;
    
    m2[-1]=5;

    m2[0]=3;
    unordered_map<int, int>::iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<endl;
        it++;
    }
    return 0;
}