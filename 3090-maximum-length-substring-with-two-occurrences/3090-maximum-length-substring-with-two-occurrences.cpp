class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<int,int>mp;
        int maxi=0;
        if(s.length()==1)
        return 1;
        int i=0;
        int j=0;
       // mp[nums[i]]++;
        //mp[j]++;
        while(j<s.length()){
           mp[s[j]]++;
           while(mp[s[j]]>2)
           {
            mp[s[i]]--;
            i++;
           }
           maxi=max(maxi,j-i+1);
           j++;
        }
        return maxi;
    }
};