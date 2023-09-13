#include<bits/stdc++.h>
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
vector<vector<int>>LevelOrder(node* root)
{
    vector<vector<int>>v;
    if(root==NULL)
    {
        return v;
    }
    queue<node*>q;
    q.push(root);
    vector<int>k;
    while(!q.empty())
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            node* temp=q.front();
            q.pop();
            k.push_back(temp->data);
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        v.push_back(k);
        k.clear();
    }
    reverse(v.begin(),v.end());
    return v;
}
int main()
{
    node* root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    vector<vector<int>>v=LevelOrder(root);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}