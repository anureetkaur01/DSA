#include <iostream>
#include <stack>
using namespace std;
class STACK{
    public:
    int priority(char c){
 if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
    }
    string reversal(string &str){
        int l=str.length();
       
        for(int i=0;i<l/2;i++){
            char temp=str[i];
            str[i]=str[l-i-1];
            str[l-i-1]=temp;
        }
        for(int j=0;j<l;j++){
            if(str[j]==')')
            str[j]='(';
            else if(str[j]=='(')
            str[j]=')';
        }
        return str;
    }
    string infixToPrefix(string s){
        string ans="";
        stack<char>st;
        s=reversal(s);
        for(int i=0;i<s.length();i++){
            char ch=s[i];
          if(ch=='(')
          st.push(ch);
          else if(ch==')')
          {
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
          }
          else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ||(ch>='0' && ch<='9'))
            ans+=ch;
            else {
                if(ch=='^'){
                    while(!st.empty() && priority(ch)<priority(st.top())){
                        ans+=st.top();
                        st.pop();
                    }
                }
                else{
                     while(!st.empty() && priority(ch)<=priority(st.top())){
                        ans+=st.top();
                        st.pop();
                    }
                }
                st.push(ch);
            }  
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        ans=reversal(ans);
        return ans;
    }
};
int main(){
    STACK obj;
   cout<<obj.infixToPrefix("A+B*C");
return 0;
}