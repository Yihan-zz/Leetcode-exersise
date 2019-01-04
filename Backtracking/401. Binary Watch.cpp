#include <iostream>
#include <vector>
#include <string>
using namespace std;
int time2[10]={60,120,240,480,1,2,4,8,16,32};
string time(int x[10])
{
    int min=0;
    int ss=0;
    for(int i=0;i<10;i++)
    {
        if(x[i]==1)
            min+=time2[i];
        if(x[i]==1&&i>=4)
            ss+=time2[i];
    }
    //cout<<ss<<endl;

    if(ss>=60) return " ";
    int hour=min/60;
    if(hour>=12) return " ";
    min = min%60;

    string hs= to_string(hour);
    if(min<=9)
        return hs+":0"+to_string(min);
    else
        return hs+":"+to_string(min);
}
void excute(vector<string>& res, int i, int num,int x[],int p){

    if(i>=num){
        string r=time(x);
        if(r[0]!=' '){
            res.push_back(r);cout<<r<<endl;return;
        }

    }
    else{
        for(int j=p+1;j<10;j++){
            x[j]=1;
            excute(res,i+1,num,x,j);
            x[j]=0;
        }
        return;
    }
}
vector<string> readBinaryWatch(int num) {
    vector<string> res;
    int x[10]={0,0,0,0,0,0,0,0,0,0};

    excute(res,0,num,x,-1);
    return res;
}

int main()
{
    readBinaryWatch(4);
    cout << "Hello world!" << endl;
    return 0;
}
