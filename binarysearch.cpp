#include<iostream>
#include<vector>
using namespace std;
int bsrch(vector<int>&arr,int wanted){
   int l=0;int r=arr.size()-1;
   while(l<=r){
      int mid=(l+r)/2;
      if(arr[mid]==wanted){
    return mid;
      }
      if(mid<arr[wanted])
      l++;
      if(mid>arr[wanted])
    r--;
   }

   return -1;
}
int main(){
    vector<int>vct{3,6,9,12,15,77};
    if(bsrch(vct,15)!=-1)
    cout<<"Found at  "<<bsrch(vct,15);
else cout<<"NOT FOUNDDD";
return 0;
}