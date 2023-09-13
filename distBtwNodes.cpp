#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* LCA(node* root,int n1,int n2)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->data==n1 or root->data==n2)
    {
        return root;
    }
    node* left=LCA(root->left,n1,n2);
    node* right=LCA(root->right,n1,n2);
    if(left!=NULL and right!=NULL)
    {
        return root;
    }
    if(left==NULL and right==NULL)
    {
        return NULL;
    }
    if(left!=NULL)
    {
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
}
int dist(node* root,int k,int level)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==k)
    {
        return level;
    }
    int left=dist(root->left,k,level++);
    if(left==-1)
    {
        return dist(root->right,k,level+1);
    }
    return left;//dist(root->left,k,level+1);
}
int distBtwNodes(node* root,int n1,int n2)
{
    node* lca=LCA(root,n1,n2);
    int d1=dist(lca,n1,0);
    int d2=dist(lca,n2,0);
    return d1 + d2;
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
    cout<<distBtwNodes(root,4,7)<<endl;
    return 0;
}