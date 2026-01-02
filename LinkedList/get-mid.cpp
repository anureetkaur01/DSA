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
int get_mid(node *head){
node *sp=head;
node *fp=head;
while(fp->next!=NULL && fp->next->next!=NULL){
    sp=sp->next;
    fp=fp->next->next;
}
if(fp->next==NULL)
return sp->info;
else return sp->next->info;
}
int getmid2(node *head){
    int count=0;
    node *ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    if(count==1)
    return head->info;
    ptr=head;
   
        count=count/2;
        for(int i=1;i<=count;i++){ 
        ptr=ptr->next;
        }
        return ptr->info;
}
int main(){
node *head=NULL;
head=appendNode(head,101);
head=appendNode(head,102);
head=appendNode(head,103);
head=appendNode(head,104);
print(head);    
cout<<endl<<get_mid(head)<<endl;
cout<<getmid2(head);
}