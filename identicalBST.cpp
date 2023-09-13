#include<iostream>
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
bool identical(node* root1,node* root2)
{
    if(root1==NULL and root2==NULL)
    {
        return true;
    }
    else if(root1==NULL or root2==NULL)
    {
        return false;
    }
    bool cond1=root1->data==root2->data;
    bool cond2=identical(root1->left,root2->left);
    bool cond3=identical(root1->right,root2->right);
    if(cond1 and cond2 and cond3)
    {
        return true;
    }
    return false;
}
int main()
{
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    if(identical(root1,root1))
    {
        cout<<"The BST's are identical"<<endl;
    }
    else{
        cout<<"The BST's are not identical"<<endl;
    }
}