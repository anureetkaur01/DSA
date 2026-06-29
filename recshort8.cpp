#include <bits/stdc++.h>
using namespace std;
int f(int n)
    {
     if(n>0)
       return(n+f(n-2));
    }

    int main()
    {
      int n=10;
      int f(int n);
      cout<<f(n);
    }
