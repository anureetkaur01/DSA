#include <bits/stdc++.h>
using namespace std;
/*int big(vector<int>arr,int max,int n){
    if(n==-1)
    return max;
    if(max<=arr[n])
    return big(arr,arr[n],n-1);  // IT WOULD ONLY EXECUTE IF MY max<=arr[n] else no recursion and it will give 0 as return.
}
int main(){
    vector<int> vct{40,23,88,4,2,45,10};
  cout<<big(vct,vct[vct.size()-1],vct.size()-1);
}*/

int big(vector<int>arr,int max,int n){
    if(n==-1)
    return max;
    if(max<=arr[n])
    max=arr[n];
    return big(arr,max,n-1);
}
int main(){
    vector<int> vct{40,23,88,4,2,45,10};
  cout<<big(vct,vct[vct.size()-1],vct.size()-1);
}
