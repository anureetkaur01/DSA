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
int main(){
   node *h1=NULL;
   node *h2=NULL;
   node *h3=NULL;
   h1=appendNode(h1,1);
   h1=appendNode(h1,3);
   h1=appendNode(h1,5);
   h1=appendNode(h1,7);
   h2=appendNode(h2,2);
   h2=appendNode(h2,4);
   h2=appendNode(h2,6);
   print(h1);
   cout<<endl;
   print(h2);
   cout<<endl;
   h3=merge(h1,h2);
   print(h3);
}