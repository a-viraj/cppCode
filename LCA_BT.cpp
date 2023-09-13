#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool getpath(node* root,int key,vector<int>&path)
{
    if(root==NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if(root->data==key)
    {
        return true;
    }
    if(getpath(root->left,key,path)||getpath(root->right,key,path))
    {
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(node* root,int n1,int n2)
{
    vector<int>v1;
    vector<int>v2;
    if(!getpath(root,n1,v1) or !getpath(root,n2,v2))
    {
        return -1;
    }
    int pc;
    for(pc=0;pc<v1.size() and v2.size();pc++)
    {
        if(v1[pc]!=v2[pc])
        {
            break;
        }
    }
    return v1[pc-1];
}
//new algo
node* LCA2(node* root,int n1,int n2)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->data==n1 or root->data==n2)
    {
        return root;
    }
    node* leftLCA=LCA2(root->left,n1,n2);
    node* rightLCA=LCA2(root->right,n1,n2);
    if(leftLCA and  rightLCA)
    {
        return root;
    }
    if(leftLCA!=NULL)
    {
        return leftLCA;
    }
        return rightLCA;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    int n1=7,n2=6;
    node* lca=LCA2(root,n1,n2);
    if(lca==NULL)
    {
        cout<<" LCA doesn't exist"<<endl;
    }
    else
    {
        cout<<"LCA: "<<lca->data<<endl;
    }
}