//pre order and in-order
/*
1. Pick  element fron preorder & create a node
2. Increment preorder idx
3.Search for picked element's pos in inorder
4. Call to build left subtree from inorder's 0 to pos-1
5. call to build right subtree from inorder pos+1 to pos-1
6. Return the node
*/
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
int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}
node* buildTree(int preorder[],int inorder[],int start,int end)
{
    static int idx=0;
    if(start>end)
    {return NULL;
    }
    int cur=preorder[idx];
    idx++;
    node* n= new node(cur);
    if(start==end)
    {
        return n;
    }
    int pos =search(inorder,start,end,cur);
    n->left=buildTree(preorder,inorder,start,pos-1);
    n->right=buildTree(preorder,inorder,pos+1,end);
    return n;

}
void inorderPrint(node* root)
{
    if(root==NULL)
    {
        return;
    } 
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);

}
int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    //build tree
    node* root=buildTree(preorder,inorder,0,4);
    inorderPrint(root);
}