#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next=NULL;
    ListNode *child=NULL;
    ListNode()
    {
        val = 0;
        //next = NULL;
        //child = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        //next = NULL;
        //child = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* next2)
    {
        val = data1;
        next = next1;
        child = next2;
    }
};
ListNode *merge(ListNode *l1,ListNode *l2){
    ListNode *dummy=new ListNode(0);
    ListNode *res=dummy;
    while(l1!=NULL && l2!=NULL){
        if(l1->val<l2->val){
            res->child=l1;
            res=l1;
            l1=l1->child;
        }
        else{
             res->child=l2;
            res=l2;
            l2=l2->child;
        }
        res->next=NULL;
    }
    if(l1!=NULL)
    res->child=l1;
    else res->child=l2;
    return dummy->child;
}
ListNode *rec_func(ListNode *head){
    if(head==NULL ||head->next==NULL)
    return head;

    ListNode *mergedhead=rec_func(head->next);
    return merge(head,mergedhead);
}