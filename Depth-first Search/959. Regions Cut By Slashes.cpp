#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
vector<int> pre;
int count1 = 0;
int N=0;
int regionsBySlashes(vector<string>& grid) {
    N = grid.size();
    count1 = N*N*4;
    for(int i = 0; i < N*N*4; i++)
    {
        pre.push_back(i);
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if (i>0) {
                union_(cal(i-1,j,2),cal(i,j,0));
            }
            if (j>0) {
                union_(cal(i,j-1,1),cal(i,j,3));
            }
            if (grid[i][j]!='/') {
                union_(cal(i,j,0),cal(i,j,1));
                union_(cal(i,j,2),cal(i,j,3));
            }
            if (grid[i][j]!='\\') {
                union_(cal(i,j,0),cal(i,j,3));
                union_(cal(i,j,1),cal(i,j,2));
            }
        }
    }
    return count1;
}
int cal(int i, int j, int k){
    return (i*N+j)*4+k;
}
int find(int x){
    if(pre[x] == x){
        return x;
    }
    return pre[x] = find(pre[x]);
}
void union_(int x, int y){
    int a = find(x);
    int b = find(y);
    if (a==b) {
        return;
    }
    count1--;
    pre[a] = b;
    
}