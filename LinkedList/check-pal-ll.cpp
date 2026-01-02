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
bool isPal(node *head){
vector<int>arr;
node *ptr=head;
while(ptr!=NULL){
    arr.push_back(ptr->info);
    ptr=ptr->next;
}
int n=arr.size();
if(n==1)
return true;
for(int i=0;i<=n/2;i++){
    if(arr[i]!=arr[n-i-1])
    return false;
}
return true;
}
int main(){
node *head=NULL;
head=appendNode(head,101);
head=appendNode(head,102);
head=appendNode(head,103);
head=appendNode(head,104);
print(head);    
cout<<endl;
cout<<isPal(head)<<endl;
}