#include<iostream>
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
//check
bool isBST(node* root,node* min=NULL,node* max=NULL)
{
    if(root==NULL)
    {
        return true;
    }
    if(min!=NULL and root->data<=min->data)
    {
        return false;
    }
    if(max!=NULL and root->data>=max->data)
    {
        return false;
    }
    bool leftval=isBST(root->left,min,root);
    bool rightval=isBST(root->right,root,max);
    return leftval and rightval;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    if(isBST(root,NULL,NULL))
    {
        cout<<"The BST is valid"<<endl;
    }
    else{
        cout<<"The BST is not valid"<<endl;
    }
}