#include<iostream>
using namespace std;
int getmax(int a[],int n){  //to here, can say reference variable for an array's base address variable
int mx=a[0];
for(int i=0;i<n;i++){
    mx=max(mx,a[i]);
}
return mx;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    cout<<"MAX: "<<getmax(&a[0],n);//base address of array is passed from here  
    return 0;
}