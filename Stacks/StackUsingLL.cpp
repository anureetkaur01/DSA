 #include<iostream>
using namespace std;
class Node {
    public:
    int info;
    Node *next=NULL;
    Node(int val){
        info=val;
    }
};
class STACK{
    public:
Node *top=NULL;
int size=0;
void push(int val){
    Node *temp=new Node(val);
    temp->next=top;//head wali cheez hi ethe ho rahi aa
    top=temp;
    cout<<"pushed "<<val<<endl;
    size++;
    //print();
}
void pop(){
    if(top==NULL)
    return;
    Node *temp=top;
    top=top->next;
    cout<<"Popped "<<temp->info<<endl;
    delete temp;   
    size--;
    //print();
}
int sizee(){
    return size;
}
int topu(){
    if(top==NULL)
    return -1;
    return top->info;
}
void print(){
    cout<<"PRINT--------------------"<<endl;
    Node *ptr=top;
    while(ptr!=NULL){
        cout<<ptr->info<<endl;
        ptr=ptr->next;
    }
    cout<<"----------------------------"<<endl;
}
~STACK(){
    while(top!=NULL)
    {
        pop();
    }
}
};
int main(){
    STACK st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.print();
    st.pop();
    st.print();
    cout<<st.topu()<<endl;
    return 0;
}