class Solution {
public:
    string largestOddNumber(string num) {
       /* int n;
        if(!num.empty())
         n=stoi(num);
        else return "";*/
        int n=num.length();
        if(!num.empty())
      {  
       int i=n-1;
       int len=0;
        while(i>=0)
        {
          if((num[i]-'0')%2==0)
           i--;
           else 
           return num.substr(0,n-len);
          
           len++;
        }
        if(i<0) return "";
        }
         return "";
    }
};