class Solution {
public:
   
    string processStr(string s) {
        string result="";
       for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z')
        result+=s[i];
        if(s[i]=='*'){
            if(!result.empty())
            result.pop_back();
            else continue;
        }
        if(s[i]=='#')
        {
           result+=result;
        }
        if(s[i]=='%')
        reverse(result.begin(),result.end());

       }
       return result;
    }
};