class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>hash(256,-1);
       int len;
       int maxlen=0;
       int r=0,l=0; 
       int n=s.length();
       while(r<n){
           if(hash[s[r]]!=-1)
           {
            if(hash[s[r]]>=l)
            l=hash[s[r]]+1;
           }
           len=r-l+1;
           maxlen=max(maxlen,len);
           hash[s[r]]=r;
           r++;
       }
       return maxlen;
    }
};