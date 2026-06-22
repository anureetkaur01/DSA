class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        int count=0;
        for(int i=0;i<text.length();i++){
          mp[text[i]]++;
        }
        while(mp['b']>=1 && mp['a']>=1 && mp['l']>=2 && mp['o']>=2 && mp['n']>=1)
         {
            mp['b']-=1;
            mp['a']-=1;
            mp['l']-=2;
            mp['o']-=2;
            mp['n']-=1;
            count++;
         }
         return count;
    }
};