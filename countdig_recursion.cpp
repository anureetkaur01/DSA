#include <bits/stdc++.h>
using namespace std;
int countdig(int n){
    if(n<=9)
    return 1;
    return countdig(n/10)+1;
}
int main(){
    int n;
    cin>>n;
    
    cout<<countdig(n);
}
/*
int countdig(int n,int c){
    if(n==0)
    return 0;
    c=countdig(n/10,c)+1;
    return c;
}
int main(){
    int n;
    cin>>n;
    int count=0;
    cout<<countdig(n,count);
}*/