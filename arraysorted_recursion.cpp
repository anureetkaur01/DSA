#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>arr,int n){
    if(n==0)
    return true;
    if(arr[n]<arr[n-1])
    return false;
    return isSorted(arr,n-1);
}
int main(){
    vector<int>vct{4,7,12,16,44};
    cout<<isSorted(vct,vct.size()-1);
}