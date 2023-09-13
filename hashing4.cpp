#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int key;
    node* left,*right;
};
node* newnode(int val)
{
    node* k=new node;
    k->key=val;
    k->left=NULL;
    k->right=NULL;
    return k;
}
void verticalOrder(node* root,int hdis,map<int,vector<int>>&m)
{
    if(root==NULL)
    {
        return;
    }
    m[hdis].push_back(root->key);
    verticalOrder(root->left,hdis-1,m);
    verticalOrder(root->right,hdis+1,m);
}
int main()
{
    node* root= newnode(10);
    root->left=newnode(7);
    root->right=newnode(4);
    root->left->left=newnode(3);
    root->left->right=newnode(11);
    root->right->left=newnode(14);
    root->right->right=newnode(6);
    map<int,vector<int>>m;
    int hdis=0;
    verticalOrder(root,hdis,m);
    map<int,vector<int>>::iterator i;
    for(i=m.begin();i!=m.end();i++)
    {
        for(int j=0;j<(i->second).size();j++)
        {
            cout<<(i->second)[j]<<" ";
        }
        cout<<endl;
    }
}
