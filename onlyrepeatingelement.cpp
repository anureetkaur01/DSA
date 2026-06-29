#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
   for(int j=0;j<n;j++){
    cin>>arr[j];
   }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
        {
            cout<<"Repeating element: "<<arr[i];
            break;
        }
        else continue;
    }
    return 0;
}