#include <bits/stdc++.h>
using namespace std;
int geindex(vector<int>arr,int i){
    int min=i;
    for(int j=i+1;j<arr.size();j++){
        if(arr[min]>arr[j])
        min=j;
    }
    return min;
}
int main(){
vector<int>arr{4,32,7,2,4,3,66,0};
for(auto k:arr){
        cout<<k<<" ";
    }
cout<<endl;
    for(int i=0;i<arr.size()-1;i++){
     int min=geindex(arr,i);
     swap(arr[i],arr[min]);
    }
for(auto k:arr){
        cout<<k<<" ";
    }
    return 0;
}