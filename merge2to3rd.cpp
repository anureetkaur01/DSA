#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v1{0,1,3,4,5,7};
  vector<int>v2{4,6,6,7,9};
  vector<int>vct;
  int i=0,j=0;
  while (i<v1.size()&&j<v2.size())
  {
    if(v1[i]<v2[j])
   {vct.push_back(v1[i]);
   i++;}
    else
    {
        vct.push_back(v2[j]);
        j++;
    }
  }
  for(int l=i;l<v1.size();l++){
    vct.push_back(v1[l]);
  }
   for(int m=j;m<v2.size();m++){
    vct.push_back(v2[m]);
  }
  for(auto val:vct){
    cout<<val<<"  ";
  }
}