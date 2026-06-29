#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>mp;
    mp.insert({9,4});
    mp[5]=8;
    mp[3]=6;
    for(auto val:mp){
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"--------------------------------\n";
    cout<<mp[5]<<endl;
    cout<<mp[4]<<endl;
    cout<<mp.at(4)<<endl;
    mp[5]=10;
     cout<<endl;
      for(auto val:mp){
        cout<<val.first<<" "<<val.second<<endl;
    }
    mp.erase(4);
    cout<<"-------------------------\n";
     for(auto val:mp){
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"********************************\n";
    map<int,int,greater<int>>p;
     for(auto val:mp){
        p.insert({val.first,val.second});
    }
    cout<<"*888888888888888888888888888888\n";
     for(auto val:p){
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"**********\n"<<mp.size()<<endl;
    cout<<mp.empty()<<endl;
    mp.clear();
    cout<<"-----------------------\n"<<mp.size();
        return 0;
}