#include <bits/stdc++.h>
using namespace std;
int sum(int n){
if(n==0)
return 0;
int s=sum(n-1)+n;
return s;
}
int main(){
    cout<<sum(10);
}