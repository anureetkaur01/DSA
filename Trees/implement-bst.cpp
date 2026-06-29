#include<bits/stdc++.h>
using namespace std;
class BSTNODE{
public: 
BSTNODE *left=NULL;
BSTNODE *right=NULL;
int info;
BSTNODE(int val){
   info=val;
}
};

class TREE{
    public:
    BSTNODE *append(BSTNODE *root,int val){
        if(root==NULL){
return new BSTNODE(val);
        }
    if(val<root->info)
    root->left=append(root->left,val);

    else root->right=append(root->right,val);

    return root;
    }
    void InOrderTraversal(BSTNODE *root){
        if(root==NULL)
        return;

        InOrderTraversal(root->left);
        cout<<root->info<<" ";
        InOrderTraversal(root->right);

    }
};
int main(){
    TREE obj;
    BSTNODE *root=NULL;
    root=obj.append(root,100);
    root=obj.append(root,90);
    root=obj.append(root,110);
    root=obj.append(root,80);
        root=obj.append(root,95);
    root=obj.append(root,200);
    obj.InOrderTraversal(root);
return 0;
    
}