#include<bits/stdc++.h>
using namespace std;
class Dnode{
    public:
    int info;
    Dnode *prev=NULL;
    Dnode *next=NULL;
    Dnode(int data){
        info=data;
    }
};
Dnode *insert_before_wanted(Dnode *head,int wanted,int val){
  Dnode *newnode=new Dnode(val);
  if(head==NULL)
  return newnode;
  Dnode *ptr=head;
  if(head->info==wanted){
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    return head;
  }
  while(ptr!=NULL){
    if(ptr->next->info==wanted)
    break;
   else ptr=ptr->next;
  }
  if(ptr==NULL)
  return head;
  newnode->prev=ptr;
  newnode->next=ptr->next;
  ptr->next=newnode;
  return head;
}
Dnode *insert_after_wanted(Dnode *head,int wanted,int val){
    Dnode *newnode=new Dnode(val);
  if(head==NULL)
  return newnode;
  Dnode *ptr=head;
  if(head->info==wanted){
   newnode->prev=head;
      newnode->next=head->next;
      head->next=newnode;
      if(newnode->next!=NULL)
      newnode->next->prev=newnode;
    return head;
  }
  while(ptr!=NULL){
    if(ptr->info==wanted)
    break;
   else ptr=ptr->next;
  }
  if(ptr==NULL)
  return head;
   newnode->prev=ptr;
      newnode->next=ptr->next;
      ptr->next=newnode;
if(newnode->next!=NULL)
      newnode->next->prev=newnode;
  return head;
}
Dnode *append(Dnode *head,int val){
    Dnode *newnode=new Dnode(val);
    //newnode->next=NULL;
    if(head==NULL)
    return newnode;
    Dnode *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
     ptr->next=newnode;
     newnode->prev=ptr;
     return newnode;
}
void show(Dnode *head){
    Dnode *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->info<<"   ";
        ptr=ptr->next;
    }
}
void show2(Dnode *tail){
    Dnode *ptr=tail;
    cout<<"WELL,ptr: "<<ptr->info<<endl;
    if(ptr==NULL)
{    cout<<"Emptyy......"<<endl;
     return;
}
    while(ptr!=NULL){
    cout<<ptr->info<<"    ";
    ptr=ptr->prev;
    }
}
void del_wanted(Dnode *head,int wanted){
  if(head==NULL)
  return;
  Dnode *temp,*ptr=head;
  if(head->info==wanted){
   temp=head;
   head=head->next;
   delete temp;
   head->prev=NULL;
  }
  Dnode *prev=ptr;
  while(ptr!=NULL){
    if(ptr->info==wanted)
    break;
    else {
      prev=ptr;
      ptr=ptr->next;
    }
  }
  if(ptr==NULL)
  {cout<<"No wanted value found...."<<endl;
    return ;
  }
  prev->next=ptr->next;
  ptr->next->prev=ptr->prev;

}
int main(){
Dnode *head=NULL;
Dnode *tail=NULL;
tail=head=append(head,10);
tail=append(head,20);
tail=append(head,30);
tail=append(head,40);
show(head);
cout<<endl;
head=insert_before_wanted(head,10,5);
show(head);
cout<<endl;
head=insert_after_wanted(head,40,45);
show(head); 
cout<<endl;
show2(tail);
cout<<endl;
del_wanted(head,40);
show(head);
}
