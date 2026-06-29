#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
    int b=7;
   const int *pp;
   pp=&a;
   cout<<*pp<<"  "<<pp<<endl;
 //  *pp=888;
    cout<<*pp<<"  "<<pp<<endl;
    pp=&b;
     cout<<*pp<<"  "<<pp<<endl;

     int *const ppp=&b;
      cout<<*ppp<<"  "<<ppp<<endl;
      *ppp=999;
       cout<<*ppp<<"  "<<ppp<<endl;
     // ppp=&a;
       cout<<*ppp<<"  "<<ppp<<endl;
        return 0;
}