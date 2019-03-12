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
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        int x0,y0,x1,y1;
        int x2,y2,x3,y3;
        cin>>x0>>y0>>x1>>y1;
        cin>>x2>>y2>>x3>>y3;    
        vector<int> v1(m,1);
        for(int i = 0; i < m; i+=2)
        {
            v1[i]=-1;
        }
        vector<int> v2(m,-1);
        for(int i = 0; i < m; i+=2)
        {
            v2[i]=1;
        }
        vector<vector<int> > martix(n);
        for(int i = 0; i < n; i++)
        {
            if(i%2==0) martix.push_back(v2);
            else martix.push_back(v1);
        }
        for(int i = x0-1; i <= x1-1; i++)
        {
            for(int j = y0-1; j <= y1-1; j++)
            {
                martix[i][j]=1;
            }
            
        }
        for(int i = x2-1; i <= x3-1; i++)
        {
            for(int j = y2-1; j <= y3-1; j++)
            {
                martix[i][j]=-1;
            }
        }
        int res1=0,res2=0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if (martix[i][j]==1) {
                    res1++;
                }
                else
                {
                    res2++;
                }
            }
        }
        cout<<res1<<" "<<res2<<endl;

    }
}