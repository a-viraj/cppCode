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
node* bst(int arr[],int s,int l)
{
    if(s>l)
    {
        return NULL;
    }
    int mid=(s+l)/2;
    node* root=new node(arr[mid]);
    root->left=bst(arr,s,mid-1);
    root->right=bst(arr,mid+1,l);
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
int main()
{
    int arr[]={1,2,3,4,5};
    node* root=bst(arr,0,4);
    printpreorder(root);
}
