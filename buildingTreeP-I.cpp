//postorder and inorder
/*
1. Start from the end node of postorder & pick an element to create a node
2. Decrement post order idx
3. Search for picked element's pos in inorder
4. Call to build right subtree from inorder's position+1 to n
5. Call to build left subtree from inorder 0 to pos-1
6. return the node
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
int search(int inorder[],int start,int end,int val)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==val)
        {
            return i;
        }
    }
    return -1;
}
node* buildTree(int postorder[],int inorder[],int start,int end)
{
    static int idx=4;
    if(start>end)
    {
        return NULL;
    }
    int val=postorder[idx];
    idx--;
    node* current=new node(val);
    if(start==end)
    {
        return current;
    }
    int pos=search(inorder,start,end,val);
    current->right=buildTree(postorder,inorder,pos+1,end);
    current->left=buildTree(postorder,inorder,start,pos-1);
    return current;
}
void print(node* root)
{
    if(root==NULL)
    {
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);

}
int main()
{
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node* root= buildTree(postorder,inorder,0,4);
    print(root);
    cout<<" \n";
    return 0;

}