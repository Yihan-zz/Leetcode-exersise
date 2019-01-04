#include <iostream>
#include <string>
#include <memory.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int size=s.size();
    bool zimu[150]={false};
    int maxLength=0;
    int currLength=0;
    int startIndex=0;
    for(int i=0;i<size;i++)
    {
        if(zimu[s[i]-0]==true)
        {
            memset(zimu,0,sizeof(bool)*150);
            if(currLength>maxLength) maxLength=currLength;
            currLength=0;

            i=startIndex;
            startIndex++;
        }
        else
        {
            zimu[s[i]-0]=true;
            currLength++;
        }
    }
    if(currLength>maxLength) maxLength=currLength;
    return maxLength;
}
int main()
{

    cout <<lengthOfLongestSubstring("abcabcbb")<< endl;
    return 0;
}
