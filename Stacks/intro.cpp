#include<bits/stdc++.h>
using namespace std;
class STACK{
    int top=-1;
    int *stk;
    int len;
    public:
    STACK(int l){
        len=l;
       stk=new int[len];
    }
    void push(int val){
        if(top<len-1){
        top++;
        stk[top]=val;
        cout<<"PUSHED "<<val<<" INTO STACK\n";
        }
        else 
        cout<<"Stack overflow\n";
    }
    void pop(){
        if(top>=0)
        {
            int val=stk[top];
            top--;
            cout<<"POPPED "<<val<<" FROM STACK\n";
        }
        else cout<<"STACK UNDERFLOW\n";
    }
    bool isEmpty(){
        return (top==-1?true:false);
    }
    bool isFull(){
         return (top==len?true:false);
    }
    int topu(){
        if(top>=0)
    return stk[top];
        return -1;
    }
    int size(){
        return top+1;
    }
 };
 int main(){
    STACK s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.topu()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
while(!s.isEmpty()){
    cout<<s.topu()<<endl;
    s.pop();
}
cout<<s.size();
 }