#include <bits/stdc++.h>
using namespace std;
void mergesort(vector<int>&arr,int beg,int mid,int end){
    int i=beg;
    int j=mid+1;
    int m=mid;
    int n=end;
    vector<int>temp;
    while(i<=m && j<=n){
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    for(int l=i;l<=m;l++){
        temp.push_back(arr[l]);
    }
    for(int l=j;l<=n;l++){
        temp.push_back(arr[l]);
    }
    int k=0;
    for(int l=beg;l<=end;l++){
        arr[l]=temp[k];
        k++;
    }
}
void merge(vector<int>&arr,int beg,int end){
    if(beg==end)
    return;
    int mid=(beg+end)/2;
    merge(arr,beg,mid);
    merge(arr,mid+1,end);
    mergesort(arr,beg,mid,end);
}
int main(){
    vector<int>arr{8,54,32,6,7,57,4,49};
for(auto k:arr){
        cout<<k<<" ";
    }
    cout<<endl;
    merge(arr,0,arr.size()-1);
    for(auto k:arr){
        cout<<k<<" ";
    }
}