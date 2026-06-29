#include <iostream>
using namespace std;
class arr{
    int cap,len;
    int *ary;
    public:
    arr(int cap,int len){
     this->len=len;
      this->cap=cap;
      ary=new int[cap];
    }
  void input(){
    for(int i=0;i<len;i++){
        cin>>ary[i];
    }
    show();
  }
  void show(){
    cout<<"\nOUTPUT ARRAY.......\n";
    for(int i=0;i<len;i++){
        cout<<ary[i]<<" ";
    }cout<<endl;
  }
  void append(int val){
    if(len==cap)
    {
        doscale();
        cout<<"\nSCALED...........\n";
    }
    ary[len]=val;
    cout<<val<<" inserted at "<<len<<endl;
    len++;
    show();
  }
  void insert(int pos,int val){
    if(pos>=len)
    { cout<<"\nInvalid pos \n";
        return ;
  }
  if(len==cap){
    cout<<"\nSCALING REQUIRED..........\n";
   doscale();  
}
   for(int i=len-1;i>=pos;i--){
    ary[i+1]=ary[i];
   }
   ary[pos]=val;
   cout<<val<<" inserted at "<<pos<<endl;
   len++;
   show();
} 
void dodelete(int pos){
     ary[pos]=0;
     for(int i=pos+1;i<len;i++){
        ary[i-1]=ary[i];
     }
     len--;
     cout<<"\nValue deleted from "<<pos<<endl;
     show();
}
void doscale(){
    cap=cap*2;
    int *newarr=new int[cap];
    for(int i=0;i<len;i++){
        newarr[i]=ary[i];
    }
    delete[] ary;
    ary=newarr;
}
int find(int val){
  int i,found=0;
  for(i=0;i<len;i++){
    if(ary[i]==val)
    {
        found=1;
        break;
    }
  }
  if(found)
  return i;
  else return -1;
}
void dodelbysearch(int wanted){
   if(find(wanted)==-1){
    cout<<"\nNOT FOUND "<<wanted<<endl;
    return;
   }
   int pos=find(wanted);
    ary[pos]=0;
     for(int i=pos+1;i<len;i++){
        ary[i-1]=ary[i];
     }
     len--;
     cout<<"\nValue deleted from "<<pos<<endl;
     show();
}
void dodelallbysearch(int wanted){
    if(find(wanted)==-1){
    cout<<"\nNOT FOUND "<<wanted<<endl;
    return;
   }
    while(find(wanted)!=-1){
    int pos=find(wanted);
    ary[pos]=0;
     for(int i=pos+1;i<len;i++){
        ary[i-1]=ary[i];
     }
     len--;
     cout<<"\nValue deleted from "<<pos<<endl;
     show();
    }
    cout<<"\nDELETED ALL.....\n";
    show();
}
};
int main(){
    arr obj(5,5);
    obj.input();
     obj.append(100);
     obj.insert(3,6);
     obj.insert(6,3);
     obj.show();
     obj.dodelete(2);
     cout<<obj.find(400);
     obj.dodelbysearch(3);
     obj.dodelallbysearch(2);
    // obj.show();
     return 0;
}