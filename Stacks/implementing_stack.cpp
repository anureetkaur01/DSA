#include<iostream>
using namespace std;
class Stack{
    int *stk;
    int top=-1;
    int len=4;
    public:
    Stack(){
        stk=new int[len];
    }
    bool isempty(){
        return (top==-1?true:false);
    }
    bool isfull(){
        return (top<len-1?false:true);
    }
    void push(int val){
        if(top<len-1)
        {
            top++;
            stk[top]=val;
            cout<<"Now top: "<<top<<endl;
        }
        else cout<<"STACK OVERFLOWWW"<<endl;
    }
    void pop(){
        if(!isempty())
        {
        top--;
        cout<<"top: "<<top<<endl;}
        else {
            cout<<"stakc underflow"<<endl;
        }
    }
    int topu(){
        return stk[top];
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.isempty()){
        cout<<s.topu()<<endl;
       s.pop();
    }

}