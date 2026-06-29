#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void countfreq(vector<int>arr){
    int mx=arr[0];
    for(int k=0;k<arr.size();k++){
        mx=max(mx,arr[k]);
    }
    vector<int>ara(mx+1,0); //used 'new' keyword here as array/vector name,BE CAREFUL!!!
     for(int i=0;i<arr.size();i++){
        ara[arr[i]]++;
     }
     int found=0;
     for(int j=0;j<ara.size();j++){
        if(ara[j]!=0)
    cout<<j<<": "<<ara[j]<<endl;
     }
}
int main(){
    vector<int>arr{5,5,10,10,10,15};
    countfreq(arr);
    cout<<arr.capacity();
}