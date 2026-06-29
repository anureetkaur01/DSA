#include <bits/stdc++.h>
using namespace std;
int dig(int n){
    if(n<=9)
    return 1;
    else return dig(n/10)+1;
}
int rev(int n,int c){
    if(n==0)
    return 0;
    else{
        int r=n%10;
        return r*pow(10,c)+rev(n/10,c-1);
    }
}
int main(){
    int n;
    cin>>n;
    int c=dig(n);
    cout<<rev(n,c-1);
}