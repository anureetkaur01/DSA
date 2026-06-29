#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr{3,8,1,3,7,5,0,9};
    for(int i=1;i<arr.size();i++){
        int val=arr[i];
        int hole=i;
        while(hole > 0 && arr[hole-1]>=val){
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=val;
    }

for(auto val:arr){
    cout<<val<<"  ";
}

}