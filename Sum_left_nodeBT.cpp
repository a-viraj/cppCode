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
class solution
{
    public:
    bool isleaf(node* root)
    {
        if(root->left==NULL and root->right==NULL)
        {
            return true;
        }
        return false;
    }
    int sum(node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int ans=0;
        queue<node*>q;
        q.push(root);
        int sum=0;
        while(!q.empty())
        {
            node* n=q.front();
            q.pop();
            if(n!=NULL)
            {
                if(n->left)
                {
                    if(isleaf(n->left))
                    {
                        ans+=n->left->data;
                    }
                    q.push(n->left);
                }
                if(n->right)
                {
                    q.push(n->right);
                }
            }
            else
            {
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
        }
        return ans;
    }
};
int main()
{
    node* root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    solution a;
    cout<<a.sum(root)<<endl;

}