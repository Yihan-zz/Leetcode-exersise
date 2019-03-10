#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <list>
#include <queue>
using namespace std;
int main(){
    unsigned int id[1024]={0};
    int id1,id2;
    cin>>id1,id2;
    if (id1<1||id1>1024||id2<1||id2>1024) {
        cout<<-1<<endl;
    }
    else{
        if(id1==id2) cout<<1<<endl;
        else cout<<0<<endl;
    }
    
    return 0;
}