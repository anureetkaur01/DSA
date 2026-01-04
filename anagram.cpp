 #include<iostream>
#include<vector>
using namespace std;
bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        vector<int>str1(256),str2(256);
        for(int i=0;i<s.length();i++){
            int ascii1=s[i];
            str1[ascii1]++;
            int ascii2=t[i];
            str2[ascii2]++;
        }
        for(int j=0;j<str1.size();j++){
            if(str1[j]!=str2[j])
            return false;
        }
        return true;
    }
     int main(){
    string s="ABC";
    string t="BbC";
    cout<<isAnagram(s,t);
    }