#include <bits/stdc++.h>
using namespace std;
int getpvt(vector<int>&arr,int beg,int end){
int l=beg;
int r=end;
int temp=arr[beg];
while(l<=r){
    while(l<=r && arr[l]<=temp){
        l++;
    }
    while(r>=0 && arr[r]>temp){
        r--;
    }
    if(l<r)
    swap(arr[l],arr[r]);
}
swap(arr[r],arr[beg]);
return r;
}
void quicksort(vector<int>&arr,int beg,int end){
if(beg>=end) // if I do beg==end, incase postpvt=beg, quicksort(arr,beg,beg-1) beg=0,beg-1 => -1,it will continue running for beg>end in infinite loop,hnce answers never comes up
return;
int pospvt=getpvt(arr,beg,end);
quicksort(arr,beg,pospvt-1);
quicksort(arr,pospvt+1,end);    
}
int main(){
vector<int>arr{4,2,8,77,5,44,51,3};
for(auto val:arr){
    cout<<val<<"  ";
}
quicksort(arr,0,arr.size()-1);
cout<<endl;
for(auto val:arr){
    cout<<val<<"  ";
}
}