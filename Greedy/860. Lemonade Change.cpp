#include <iostream>
#include <vector>
using namespace std;
bool lemonadeChange(vector<int>& bills) {
    int five=0,ten=0;
    for(int i=0;i<bills.size();i++){
        if(bills[i]==5) ++five;
        else if(bills[i]==10){
            --five;
            if(five<0) return false;
            ++ten;
        }
        else{
            if(ten>0){
                --ten;
                --five;
            }
            else{
                five-=3;
            }
            if(five<0) return false;
        }
    }
    return true;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
