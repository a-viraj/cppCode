#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* build(int arr[],int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=(s+e)/2;
    node* root=new node(arr[mid]);
    root->left=build(arr,s,mid-1);
    root->right=build(arr,mid+1,e);
    return root;
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    
    inorder(root->right);
}
int main()
{
    int arr[]={1,2,3,4,5};
    node* root=build(arr,0,4);
    inorder(root);
}