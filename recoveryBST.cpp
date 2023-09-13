#include<iostream>
using namespace std;
//case 1:
/*
    1. swapped elements are not adjacent to each other
    2. swapped elements are adjacent to each other
*/
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
void calcPointers(node* root,node** first,node** mid,node** last,node** prev)
{
    if(root==NULL)
    {
        return;
    }
    calcPointers(root->left,first,mid,last,prev);
    if(*prev and root->data <(*prev)->data)
    {
        
    }
}
void restoreBST(node* root)
{
    node* first,*mid,*last,*prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;
    calcPointers(root,&first,&mid,&last,&prev);
    //case 1
    if(first and last!=NULL)
    {
        swap(&(first->data),&(last->data));
    }
    else if(first and mid !=NULL) 
    {
        swap(&(first->data),&(mid->data));
    }
}
int main()
{
    
}