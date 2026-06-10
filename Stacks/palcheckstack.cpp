#include<iostream>
#include<stack>
using namespace std;
bool checkpal(stack <char> stk1){
stack<char>stk2;
int n=stk1.size();
if(n%2==0)
{
for(int i=1;i<=n/2;i++){
    stk2.push(stk1.top());
    stk1.pop();
}
}
else{
     for(int i=1;i<=n/2;i++){
    stk2.push(stk1.top());
    stk1.pop();
    }
    stk1.pop();
}
for(int j=1;j<=n/2;j++){
    if(stk1.top()!=stk2.top())
    return false;
    else {
        stk1.pop();
        stk2.pop();
    }
}
if(stk1.empty()&&stk2.empty())
return true;
}
int main(){
    stack<char>stk;
    stk.push('m');
    stk.push('a');
    stk.push('a');
    stk.push('m');
    //stk.push('m');
    cout<<"ispal: "<<checkpal(stk)<<endl;
}