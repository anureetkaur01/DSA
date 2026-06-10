#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='^')
    return 3;
    else if(ch=='%'||ch=='*'||ch=='/')
    return 2;
    else if(ch=='+'||ch=='-')
    return 1;
    else return 0;
}
string toPostfix(string inf){
    string post="";
    stack <char> stk;
    for(int i=0;i<inf.length();i++){
        char ch=inf[i];
        if(ch=='(')
        stk.push(ch);
else if(ch==')')
{while (stk.top()!='(')
{
    post+=stk.top();
    stk.pop();
}
stk.pop();
    }
else if(ch>='A' && ch<='Z' ||ch>='a' && ch<='z' ||
     ch>='0' && ch<='9')
     post+=ch;
     else{
        while(!stk.empty()&&(priority(stk.top())>=priority(ch)))
            {
                post+=stk.top();
                stk.pop();
            }
          
        stk.push(ch);
     }
}
while(!stk.empty()){
    post+=stk.top();
    stk.pop();
}
return post;
}
int main(){
    cout<<toPostfix("(A+B)/(C-D)");
    return 0;
}