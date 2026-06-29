#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    vector<int>vct{2,5,7,2,3,7,9,0,9,5};
    map<int,int>mp;
    for(auto val:vct){
        mp[val]++;
    }
    for(auto v:mp){
        cout<<v.first<<" : "<<v.second<<endl;
    }
      return 0;
}