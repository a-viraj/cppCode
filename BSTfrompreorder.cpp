#include<bits/stdc++.h>
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
node* constructBST(int preorder[],int* preorderidx,int key,int min,int max,int n)
{
    if(*preorderidx>=n)
    {
        return NULL;
    }
    node* root=NULL;
    if(key>min and key<max)
    {
        root=new node(key);
        *preorderidx=*preorderidx+1;
        if(min==max)
        {
            return root;
        }
        if(*preorderidx<n)
        {
            root->left= constructBST(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        if(*preorderidx<n)
        {
            root->right=constructBST(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }
    return root;
}
void printpreorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
void printinorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printpreorder(root->left);
    cout<<root->data<<" ";
    printpreorder(root->right);
}
int main()
{
    int preorder[]={10,2,1,13,11};
    int n=5;
    int preorderidx=0;
    node* root=constructBST(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
    printpreorder(root);
    cout<<endl;
    printinorder(root);
}