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
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool isBalanced(node* root)
{
    if(root==NULL)
    {
        return true;
    }
    if(isBalanced(root->left)==false)
    {
        return false;
    }
    if(isBalanced(root->right)==false)
    {
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else
     return false;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    //root->right->left=new node(6);
    //root->right->right=new node(7);
    node* root1=new node(1);
    root1->left=new node(2);
    root1->left->left=new node(3);
    cout<<height(root1)<<endl;
    if(isBalanced(root1))
    {
        cout<<"balanced"<<" "<<endl;
    }
    else
    {
        cout<<"unbalanced"<<" "<<endl;
    }
}
