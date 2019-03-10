#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;
int main(){
        int num;
        vector<int> nums; 

        while(cin>>num){
        nums.clear();int x,temp; bool same = true;
        map<int,int> iset;

        for(int i = 0; i < num; i++)
        {
            cin>>x;
            nums.push_back(x);
            if(i>0 & nums[i]!=nums[i-1]) same = false;
            iset[x] += 1;
        }
        if(same) {
            cout<<num*(num-1)/2<<" "<<num*(num-1)/2<<endl;
        }
        else{
            sort(nums.begin(),nums.end());
            int minNum = 0;
            int maxNum = 0;
            if(iset.size()==num){
                int min = INT16_MAX;
                for(int i=0;i<num-1;i++){
                    int t = nums[i+1]-nums[i];
                    if(t<min){
                        minNum = 1;min = t;
                    }
                    else if(t == min){
                        minNum++;
                    }
                }
                maxNum = 1;
            }
            else{
                map<int,int>::iterator it = iset.begin();
                while(it!=iset.end()){
                    if(it->second>=1){
                        int nn = it->second;
                        minNum += nn*(nn-1)/2;
                        it++;
                    }
                }
                int t1=0,t2=0;
                
                for(int i = 0; i < num; i++)
                {
                    if (nums[i]==nums[0]) {
                        t1++;
                    }
                    else break;
                }
                for(int i = num-1; i >= 0; i--)
                {
                    if (nums[i]==nums[num-1]) {
                        t2++;
                    }
                    else break;
                }
                maxNum = t1*t2;
            }
            cout<<minNum<<" "<<maxNum<<endl;
        }
        }
}