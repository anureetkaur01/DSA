class Solution {
public:
    string reverseWords(string s) {
        int j;
        string result;
        int n=s.length();
        int wordlen;
        for(int i=n-1;i>=0;i-=wordlen){
         if(s[i]!=' ')
         {
            j=i;wordlen=1;
            while(j>=0 && s[j]!=' '){
                wordlen++;
                j--;
            }
            for(int k=j+1;k<j+wordlen;k++){  //j+1+wordlen-1    OR     j+wordlen
                result+=s[k];
            }
            if(wordlen>1)
            result+=' ';
         }
        else wordlen=1;
        }
        result.pop_back();
        return result;
    }
};