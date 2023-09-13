#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    node(int val)
    {
        data= val;
        left=NULL;
        right=NULL;
    }
};
node* insert(node* root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }
    else
    {
        root->right=insert(root->right,val);
    }
    return root;
}
void print(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
int main()
{
    node* root=NULL;
    root=insert(root,5);
    insert(root,1);
    insert(root,3);
    insert(root,4);
    insert(root,2);
    insert(root,7);
    print(root);
}