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
        left=NULL;
        right=NULL;
        data=val;
    }
};
node* search(node* root, int key)
{
    if(root==NULL){return NULL;}
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return search(root->left,key);
    }
    return search(root->right,key);
}
node* insert(node* root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }
    else
    {
        root->right=insert(root->right,val);
    }
    return root;
}
void print(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
node* inorderSucc(node* root)
{
    node* curr=root;
    while(curr and curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
node* Delete(node* root,int key)
{
    if(key<root->data)
    {
        root->left=Delete(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=Delete(root->right,key);
    }
    else{
        if(root->left==NULL)
        {
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            node* temp=root->left;
            free(root->left);
            return temp;
        }
        //case 3
        node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=Delete(root->right,temp->data);
    }
    return root;
}
int main()
{
    node* root=NULL;
    int arr[]={5,1,3,4,2,7};
    root=insert(root,arr[0]);
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        insert(root,arr[i]);
    }
    if(search(root,10)==NULL)
    {
        cout<<"Key doesn't exist"<<endl;
    }
    else{
        cout<<"Key exist "<<endl;
    }
    print(root);
    cout<<endl;
    Delete(root,5);
    print(root);
}