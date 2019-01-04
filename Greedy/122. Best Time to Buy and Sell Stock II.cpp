#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int sum=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]>prices[i-1]) sum+=prices[i]-prices[i-1];
    }
    return sum;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
