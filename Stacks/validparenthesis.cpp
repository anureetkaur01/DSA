#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isvalid(string s){
    stack<char>stk;
    for(int i=0;i<s.length();i++){

        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        stk.push(s[i]);

        else{
            if(stk.empty())
            return false;
            char topu=stk.top();
            stk.pop();
            if(topu=='(' && s[i]==')' || topu=='[' && s[i]==']' || topu=='{' && s[i]=='}')
            continue;
            else return false;
        }
    }
    if(stk.empty())
    return true;
    else return false;
}
int main(){
    string s="(){}[])";
    cout<<isvalid(s)<<".............."<<endl;
    return 0;
}