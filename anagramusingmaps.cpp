#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    string s1="ABCBA";
    string s2="CBABA";
    map<char,int>mp1;
    map<char,int>mp2;
    if(s1.length()!=s2.length()){
        cout<<"NOOOO\n";
        return 0;
    }
    for(int i=0;i<s1.length();i++){
        mp1[s1[i]]++;
        mp2[s2[i]]++;
    }
    int err=0;
     for(int i=0;i<s1.length();i++){
        if(mp1[s1[i]]!=mp2[s1[i]])
        {
            err=1;
            break;
        }
    }
    if(err)
    cout<<"NOT ANAGRAM";
    else cout<<"ANAGRAM\n";
      return 0;
}