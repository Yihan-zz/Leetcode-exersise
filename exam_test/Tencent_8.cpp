#include <map>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
long long int c[101][101];
void cal(){
    for(int j = 0; j < 101; j++)
    {
        for(int i = j; i < 101; i++)
        {
            if (i==j||j==0) {
                c[i][j]=1;
            }
            else
            {
                c[i][j] = (c[i-1][j] + c[i-1][j-1]) % 1000000007;
            }
        }
    }
    
}
int main(){
    long long int K; cin>>K;
    cal();
    long long int A,X,B,Y;
    cin>>A>>X>>B>>Y;
    long long int A_L = 0;long long int res = 0;
    long long int p = 0;
    while(A_L<=K&&p<=X){
        if((K-A_L)%B==0&&(K-A_L)/B<=Y){
            res=(res+(c[Y][(K-A_L)/B] )*(c[X][p]) % 1000000007)% 1000000007;
        }
        A_L += A;
        p++;
    }
    
    
    cout<<res;
    cout<<endl;
    
    return 0;
}