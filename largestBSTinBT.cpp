#include<iostream>
using namespace std;
/*
    for each node store the following information
    1. min in subtree
    2. max in subtree
    3. subtree size
    4. size of largest BST
    5. isBST
*/
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
class info
{
    public:
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};
info largestBstinBt(node* root)
{
    if(root==NULL)
    {
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL and root->right==NULL)
    {
        return {1 , root->data,root->data,1,true};
    }
    info leftinfo=largestBstinBt(root->left);
    info rightinfo=largestBstinBt(root->right);
    info curr;
    curr.size={1+leftinfo.size+rightinfo.size};
    if(leftinfo.isBST and rightinfo.isBST and leftinfo.max<root->data and rightinfo.min>root->data)
    {
        curr.min=min(leftinfo.min,min(rightinfo.min,root->data));
        curr.max=max(rightinfo.max,max(leftinfo.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(leftinfo.ans,rightinfo.ans);
    curr.isBST=false;
    return curr;
}
int main()
{
    node* root=new node(15);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(5);
    cout<<"The largest BST in BT is: "<<largestBstinBt(root).ans<<endl;
}