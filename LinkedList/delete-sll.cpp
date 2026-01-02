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

node *del_from_begin(node *head){
    if(head==NULL || head->next==NULL)
    return NULL;
    node *ptr=head;
    head=head->next;
    delete ptr;
    return head;
}
node *del_last(node *head){
    if(head==NULL || head->next==NULL)
    return NULL;
    node *ptr=head;
    while(ptr->next->next!=NULL){
     ptr=ptr->next;
    }
    delete (ptr->next);
    ptr->next=NULL;
    return head;
}
node *delete_wanted(node *head,int wanted){
    if(head==NULL )
    {
        delete head;
        return NULL;
    }
    node *ptr=head;
    node *temp;
    if(head->info==wanted)
    {
        temp=head;
        head=head->next;
        return head;
    }
    while(ptr!=NULL){
        if(ptr->next->info==wanted)
        break;
       else ptr=ptr->next;
    }
    if(ptr==NULL)
    return head;
    temp=ptr->next;
    ptr->next=ptr->next->next;
    delete temp;
    return head;
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
int main(){
node *head=NULL;
head=appendNode(head,101);
head=appendNode(head,102);
head=appendNode(head,103);
head=appendNode(head,104);
print(head);
cout<<endl;
head=del_from_begin(head);
print(head);
cout<<endl;
head=del_last(head);
print(head);
cout<<endl;
head=delete_wanted(head,102);
print(head);
}