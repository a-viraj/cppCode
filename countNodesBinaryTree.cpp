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
int count(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return count(root->left)+count(root->right)+1;
}
int sum(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return sum(root->left)+sum(root->right) + root->data;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(5);
    root->right->right=new node(5);
    cout<<count(root)<<" "<<endl;
    cout<<sum(root)<<endl;
}