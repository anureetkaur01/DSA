class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>stk;
           for(string ch:tokens){
                 //char ch=tokens[i][0];
                  if(ch=="*"||ch=="+"||ch=="-"||ch=="/"){                  
                    int x=stk.top();
                    stk.pop();
                    int y=stk.top();
                    stk.pop();
                    if(ch=="+")
                    stk.push(x+y);
                    else if(ch=="-")
                    stk.push(y-x);
                    else if(ch=="*")
                    stk.push(x*y);
                    else stk.push(y/x);
                }
                else   
                 stk.push(stoi(ch));

            }
        return stk.top();
   
    }
};