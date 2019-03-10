#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <list>
#include <queue>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    int mid = 0;
    int low = -90,high=90;
    while(count<6){
        if(n>=mid) {
            cout<<1;
            int temp=mid;
            low=mid;
            mid=(mid+high)/2;
        }
        else{
            cout<<0;
            int temp=mid;
            high = mid;
            mid = (mid+low)/2;
        }
        count++;
    }
    // if(mid==n&&n<6){
    //     cout<<1;count++;
    // }
    // if (count<6) {
    //     for(int i = 0; i < 6-count; i++)
    //     {
    //         if(mid==n)
    //             cout<<1;
    //         else
    //             cout<<0;
    //     }
    // }
    
    
    return 0;
}