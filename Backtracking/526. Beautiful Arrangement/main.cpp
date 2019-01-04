#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int>& arr,int i){
    if(arr[i]%i==0||i%arr[i]==0)
        return true;
    return false;
}

void excute(vector<int>& arr,int i,int N,int& sum){
    if(i>N){
        sum++;
        //for(auto x:arr) cout<<x<<" "; cout<<endl;
        return;
    }
    else{
        for(int j=i;j<=N;j++){
            swap(arr[i],arr[j]);
            if(check(arr,i)) excute(arr,i+1,N,sum);
            swap(arr[i],arr[j]);
        }
    }
}

int countArrangement(int N) {
    vector<int> arr(N+1);int i=0;
    for(auto& x:arr) x=i++;
    int sum=0;
    excute(arr,1,N,sum);
    return sum;
}
int main()
{

    cout<<countArrangement(3);

    return 0;
}
