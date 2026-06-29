#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){ 
    int flag=0;
    map<int,int>mp;
    vector<int>vct{2,4,3,5,6,7,8};
    for(auto val: vct){
        mp[val]++;
      if(mp[val]>1)
        {    flag=1;
            cout<<val<<endl;
            break;
        }
    }
    if(flag==0)
    cout<<"NO REPEATING ELEMENT\n";
    return 0;   
}