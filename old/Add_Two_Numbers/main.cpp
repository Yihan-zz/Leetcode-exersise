#include <iostream>

using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int gewei;
    ListNode* result=new ListNode(0);
    ListNode* start=result;
    int shiwei=0;
    while(l1!=NULL||l2!=NULL)
    {
        int l1n=0,l2n=0;
        if(l1!=NULL)
        {
            l1n=l1->val;l1=l1->next;
        }
        if(l2!=NULL)
        {
            l2n=l2->val;l2=l2->next;
        }
        gewei=l1n+l2n+shiwei;
        if(gewei>=10)
        {
            gewei-=10;shiwei=1;
        }
        else
            shiwei=0;
        result->next=new ListNode(gewei);
        //cout<<gewei<<endl;
        result=result->next;
    }
    if(shiwei==1)
        result->next=new ListNode(shiwei);
    return start->next;
}

int main()
{
    ListNode* a1=new ListNode(2);ListNode* a2=new ListNode(4);ListNode* a3=new ListNode(5);
    ListNode* b1=new ListNode(5);ListNode* b2=new ListNode(6);ListNode* b3=new ListNode(4);
    a1->next=a2;a2->next=a3;
    b1->next=b2;b2->next=b3;
    ListNode* r=addTwoNumbers(a1,b1);
    cout<<r->val<<" "<<r->next->val<<" "<<r->next->next->val<<" "<<r->next->next->next->val<<endl;
    return 0;
}
