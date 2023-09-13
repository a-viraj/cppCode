#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    node(int val)
    {
        left=NULL;right=NULL;
        data=val;
    }
};
//case 1
void printSubTrreNodes(node* root,int dist)
{
    if(root==NULL or dist<0)
    {
        return;
    }
    if(dist==0)
    {
        cout<<root->data<<" ";
        return;
    }
    printSubTrreNodes(root->left,dist-1);
    printSubTrreNodes(root->right,dist-1);
}
//case 2
int printNodesAtK(node* root,node* target,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root==target)
    {
        printSubTrreNodes(root,k);
        return 0;
    }
    int dl=printNodesAtK(root->left,target,k);
    if(dl!=-1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            printNodesAtK(root->right,target,k-dl-2);
        }
        return 1+dl;
    }
    int dr=printNodesAtK(root->right,target,k);
    if(dl!=-1)
    {
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            printNodesAtK(root->left,target,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}
int main()
{ 
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    printNodesAtK(root,root->left,1);
}