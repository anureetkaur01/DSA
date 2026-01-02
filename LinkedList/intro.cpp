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
void printreverse(node *ptr){
    if(ptr==NULL)
    return;
    printreverse(ptr->next);
    cout<<ptr->info<<"  ";
}
int sum(node *head){
    int sumele=0;
    node *ptr=head;
    while(ptr!=NULL){
        sumele+=ptr->info;
        ptr=ptr->next;
    }
    return sumele;
}
int sumrec(node *ptr,int sumele){
    if(ptr==NULL)
    return sumele;
    sumele+=ptr->info;
    return sumrec(ptr->next,sumele);
/*if(ptr==NULL)
return 0;
return ptr->info+sumrec(ptr->next);*/
}
bool isPresent_using_rec(node *ptr,int wanted){
    if(ptr==NULL)
    return false;
    if(ptr->info==wanted)
    return true;
    return (isPresent_using_rec(ptr->next,wanted));
}
bool isPresent(node *head,int target){
    node *ptr=head;
    while(ptr!=NULL){
        if(ptr->info==target)
        return true;
        else ptr=ptr->next;
    }
    return false;
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
    node *head;//contains the address of first node,basically it is the starting point of the linked list.
    node n1(10);
    node n2(20);
    node n3(30);
    node n4(40);
    head=&n1; //Head is the pointer to object, node n1 is node with info and a pointer to node n2 object.
    n1.next=&n2;//node n1,n2, etc are objects, so we will use '.' to access its things.
    n2.next=&n3;
    n3.next=&n4;
print(head);
cout<<endl;
printreverse(head);
cout<<endl<<head->next->info<<endl; //head is pointer to object, pointer de through kuch vi acces kraange, '->' use krna pau
cout<<"SUM OF DATA IN L.L: "<<sum(head)<<endl;
cout<<"Whether 30 present in L.L or not? "<<isPresent(head,30)<<endl;
cout<<"Whether 90 present in L.L or not? "<<isPresent(head,90)<<endl;
cout<<"SUM OF L.L USING RECURSION: "<<sumrec(head,0)<<endl;
cout<<"Whether 100 present in L.L or not? "<<isPresent_using_rec(head,100)<<endl;
node *head2=NULL;
head2=appendNode(head2,101);
head2=appendNode(head2,102);
head2=appendNode(head2,103);
print(head2);

}