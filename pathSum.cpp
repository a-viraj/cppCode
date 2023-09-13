#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left,*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
class solution
{
    bool ans(node* root,int target_sum,int sum)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->left==NULL and root->right==NULL)
        {
            return sum+root->data==target_sum;
        }
        return ans(root->left,target_sum,sum+root->data) or ans(root->right,target_sum,sum+root->data);
    }
    public:
    bool hasPathSum(node* root,int sum)
    {
        return ans(root,sum,0);
    }
};
int main()
{
    node* root=new node(5);
    root->left=new node(4);
    root->right=new node(8);
    root->left->left=new node(11);
    root->right->left=new node(78);
    root->left->left->left=new node(7);
    root->left->left->right=new node(2);
    
    solution a;
    cout<<a.hasPathSum(root,22);
}