#include <bits/stdc++.h>
using namespace std;
int binary(vector<int>arr,int want,int l,int r){
    if(l>r)
    return 0;
    int mid=(l+r)/2;
    if(arr[mid]==want)
    return mid;
    else if(arr[mid]>want)
    return binary(arr,want,l,mid-1);
    else if(arr[mid]<want)
    return binary(arr,want,mid+1,r);
}
int main(){
    vector<int>vct{3,4,55,60,89,95};
    int want;
    cin>>want;
    cout<<"Found at : "<<binary(vct,want,0,vct.size()-1);
}