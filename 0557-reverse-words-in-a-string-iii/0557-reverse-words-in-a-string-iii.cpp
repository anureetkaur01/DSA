class Solution {
public:
    string reverseWords(string s) {
        int wordlen;
        for(int i=0;i<s.length();i+=wordlen+1){
            int j=i;
             wordlen=0;
           while(s[j]!=' ' && j<s.length()){
           wordlen++;
            j++;
           }
           reverse(s.begin()+i,s.begin()+j);
        }
    return s;
    }
};