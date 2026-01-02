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
node *insert_after(node *head,int wanted,int val){
node *newnode=new node(val);
if(head==NULL)
return newnode;
node *ptr=head;
while(ptr->info!=wanted){
ptr=ptr->next;
}
if(ptr==NULL)
return head;
else{
    newnode->next=ptr->next;
    ptr->next=newnode;
}
return head;
}
int main(){
    node *head=NULL;
   head=appendNode(head,10);
   head=appendNode(head,20);
   head=appendNode(head,30);
   head=appendNode(head,40);
  head=insert_after(head,30,35);
  head=insert_after(head,40,50);
   print(head);
}