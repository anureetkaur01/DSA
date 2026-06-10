#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> &stk){
    if(stk.empty())
    return;
    int val=stk.top();
    stk.pop();
    print(stk);
    cout<<val<<" ";
}
int main(){
    stack<int>stk;
    stk.push(101);
    stk.push(102);
    stk.push(103);
    stk.push(104);
    print(stk);
}