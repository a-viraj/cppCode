#include<iostream>
#include<vector>
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
vector<node*>constructTrees(int start,int end)
{
    vector<node*>trees;
    if(start>end)
    {
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++)
    {
        vector<node*>leftSubtrees=constructTrees(start,i-1);
        vector<node*>rightSubtrees=constructTrees(i+1,end);
        for(int j=0;j<leftSubtrees.size();j++)
        {
            node* left=leftSubtrees[j];
            for(int k=0;k<rightSubtrees.size();k++)
            {
                node* right=rightSubtrees[k];
                node* Node= new node(i);
                Node->left=left;
                Node->right=right;
                trees.push_back(Node);
            }
        }
    }
    return trees;
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    vector<node*>c=constructTrees(1,3);
    for(int i=0;i<c.size();i++)
    {
        cout<<(i+1)<<" :";
        preorder(c[i]);
        cout<<endl;
    }
}