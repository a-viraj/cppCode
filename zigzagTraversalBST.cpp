#include<iostream>
#include<stack>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    node(int val)
    {
        data=val;
        left=NULL;right=NULL;
    }
};
void zigzagTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<node*>curr,nextlev;
    bool leftToRight=true;
    curr.push(root);
    while(!curr.empty())
    {
        node* temp=curr.top();
        curr.pop();
        if(temp)
        {
            cout<<temp->data<<" ";
            
            if(leftToRight==true)
            {
                if(temp->left)
                {
                    nextlev.push(temp->left);
                }
                if(temp->right)
                {
                    nextlev.push(temp->right);
                }
            }
            //right to left
            else{
                if(temp->right)
                {
                    nextlev.push(temp->right);
                }
                if(temp->left)
                {
                    nextlev.push(temp->left);
                }
            }
        }
        if(curr.empty())
        {
            leftToRight=!leftToRight;
            swap(curr,nextlev);
        }
    }
    
}
int main()
{
    node* root=new node(12);
    root->left=new node(9);
    root->right=new node(15);
    root->left->left=new node(5);
    root->left->right=new node(10);
    zigzagTraversal(root);
    cout<<endl;
}