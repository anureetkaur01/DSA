#include <bits/stdc++.h>
using namespace std;
void print(vector<int>arr,int n){
    if(n==-1)
    return ;
    cout<<arr[n]<<"  ";
    print(arr,n-1);
}
int main(){
   vector<int>arr{3,2,1,4,7,2};
print(arr,arr.size()-1);
}
/*void print(vector<int>arr,int i){
    if(i==arr.size())
    return;
    cout<<arr[i]<<"  ";
    print(arr,i+1);
}*/