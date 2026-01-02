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
int nth_lastnode(node *head,int n){
    if(head==NULL)
    return -1;
    node *sp=head;
    node *ptr=head;
    for(int i=1;i<n;i++){
    ptr=ptr->next;
    if(ptr==NULL)
    return -1;
    }
    node *fp=ptr;
    while(fp->next!=NULL){
        sp=sp->next;
        fp=fp->next;
    }
    return sp->info;
}

int main(){
node *head=NULL;
head=appendNode(head,101);
head=appendNode(head,102);
head=appendNode(head,103);
head=appendNode(head,104);
head=appendNode(head,105);
print(head);    
cout<<endl;
cout<<nth_lastnode(head,6)<<endl;
}