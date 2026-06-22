class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        int count=0;
        for(int i=0;i<text.length();i++){
          mp[text[i]]++;
        }
        count=min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
         return count;
    }
};