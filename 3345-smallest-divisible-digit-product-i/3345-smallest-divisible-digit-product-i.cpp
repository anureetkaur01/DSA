class Solution {
public:
    int smallestNumber(int n, int t) {
       
      for(int i=n;i<=100;i++){
        int n1=i;
       int r;
       int prod=1;
       while(n1!=0){
        r=n1%10;
        prod*=r;
        n1/=10;
       } 
       if(prod%t==0)
       return i;
      }
      return -1;
    }
};