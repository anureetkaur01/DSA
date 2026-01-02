#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int info;
    node *next=NULL;
    node(int data){
        info=data;
    }
};
void print(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->info<<"  ";
        ptr=ptr->next;
    }
}
node *appendNode(node *head,int val){
    node *newnode = new node(val);
    node *ptr=head;
    if(ptr==NULL)
    return newnode;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    return head;
}
node *findmid(node *head){
    node *sp=head;
    node *fp=head;
    while(fp->next!=NULL && fp->next->next!=NULL){
        sp=sp->next;
        fp=fp->next->next;
    }
    return sp;
}
node *merge(node *left,node *right){
    node *ptr1=left;
    node *ptr2=right;
    node *head=new node(0);
    node *tail=head;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->info<=ptr2->info){
            tail->next=ptr1;
            tail=tail->next;
            ptr1=ptr1->next;
        }
        else{
            tail->next=ptr2;
            tail=tail->next;
            ptr2=ptr2->next;
        }
    }
    if(ptr1!=NULL)
    tail->next=ptr1;
    else tail->next=ptr2;
    head=head->next;
    return head;
}
node *mergesort(node *head){
    if(head==NULL || head->next==NULL)
    return head;

    node *left=head;
    node *mid=findmid(head);
    node *right=mid->next;
    mid->next=NULL;

    node *p1=mergesort(left);
    node *p2=mergesort(right);
    head=merge(p1,p2);
    return head;
}
int main(){
   node *h1=NULL;
   h1=appendNode(h1,7);
   h1=appendNode(h1,6);
   h1=appendNode(h1,9);
   h1=appendNode(h1,4);
   print(h1);
   cout<<endl;
   h1=mergesort(h1);
   print(h1);
}