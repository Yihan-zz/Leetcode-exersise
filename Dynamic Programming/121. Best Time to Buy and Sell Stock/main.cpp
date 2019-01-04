#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int buy=0;
    int sell=0;
    int profit=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<prices[buy]) buy=i;
        if(i>buy&&profit<prices[i]-prices[buy])
            profit=prices[i]-prices[buy];
    }
    return profit;
}
int main()
{
    int a[]={7,1,5,3,6,4};
    vector<int> nums(a,a+6);
    cout<<maxProfit(nums);

    return 0;
}
