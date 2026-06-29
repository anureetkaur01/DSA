#include<iostream>
using namespace std;
template <class T>
class add{
    T a,b,sum;
    public:
    void setval(T x,T b){
        a=x;
        this->b=b;
    }
   T getsum(){
     sum=a+b;
     return sum;
   }
};
int main(){
    add <string>obj;
    obj.setval("anu","alu");
    cout<<obj.getsum();
    return 0;
}