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
int maxPath(node* root,int &ans)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=maxPath(root->left,ans);
    int right=maxPath(root->right,ans);
    int nodeMax=max(max(root->data,root->data+left+right),
    max(root->data+left,root->data+right));
    ans=max(ans,nodeMax);
    int singlePathSum=max(root->data,max(root->data+left,root->data+right));

    return singlePathSum;//ans;
}
int maxSumPath(node* root)
{
    int ans=INT_MIN;
    if(root==NULL)
    {
        return -1;
    }
    maxPath(root,ans);
    return ans;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    //root->left->right=new node(5);
    //root->right->left=new node(6);
    root->right->right=new node(5);
    cout<<maxSumPath(root);
}
/*
            1
            /\
           2  3
          /    \
         4      5
*/