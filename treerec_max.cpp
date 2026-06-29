#include <bits/stdc++.h>
using namespace std;
int domax(vector<int>arr,int beg,int end){
    if(beg==end)
    return arr[beg];
    int mid=(beg+end)/2;
    int x=domax(arr,beg,mid);
    int y=domax(arr,mid+1.,end);
    return max(x,y);
}
int main(){
    vector<int>arr{3,6,1,9,85,4};
    cout<<domax(arr,0,arr.size()-1);
}