#include <bits/stdc++.h>
using namespace std;
bool srch(vector<int>arr,int wanted,int n){
    if(n==-1)
    return false;
    if(arr[n]==wanted)
    return true;
    return srch(arr,wanted,n-1);
}
int main(){
    vector<int>vct{4,5,1,2,7,3,4};
    cout<<srch(vct,7,vct.size()-1);
}