#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>arr{3,8,10,9,3,12};
  int m1, m2;
  m1=arr[0];
  m2=INT_MIN;
  for(int i=0;i<arr.size();i++){
    if(m1<arr[i])
    {
        m2=m1;
        m1=arr[i];
    }
    else if(m1>arr[i] && m2<arr[i])
    m2=arr[i];
}if(m1==arr[0] && m2==INT_MIN)
   cout<<"error";
   else cout<<"SECOND HIGHEST: "<<m2;
  
}