#include<iostream>
#include<vector>
using namespace std;
 void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       vector<int>arr(n);
       for(int i=0;i<n;i++){
        arr[(i+k)%n]=nums[i];
       }
       nums=arr;
    }
    int main(){
     vector<int>array{1,4,7,6,2,3};
     rotate(array,3);
     for(auto val:array){
        cout<<val<<" ";
     }
    }