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
    int num; cin>>num;
    map<int,long int> m;
    list<long int>  b;
    vector<long int> v;
    for(int i = 0; i < num; i++)
    {
        long int x;
        cin>>x; v.push_back(x); 
    }
    for(int i = 0; i < num; i++)
    {
        if(i%2==0){
            b.push_back(v[i]);
        }
        else
        {
            b.push_front(v[i]);
        }
    }
    list<long int>::iterator it = b.begin();
    if(num%2==0){
        cout<<*it;
        for(int i = 1; i < num; i++)
        {
            it++;
            cout<<" "<<*it;
        }
    }
    else{
        list<long int>::iterator it = b.end(); it--;
        cout<<*it;
        for(int i = num-2; i >= 0; i--)
        {
            it--;
            cout<<" "<<*it;
        }
    }
    cout<<endl;
}