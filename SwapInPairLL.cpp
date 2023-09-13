#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insert(node* &head,int data)
{
    node* n=new node(data);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void print(node* head)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl; 
}
void swap(node* a,node* b)
{
    int temp=a->data;
    a->data=b->data;
    b->data=temp;
}
node* swaped(node* &head)
{
    node* temp=head;
    if(head==NULL)
    {
        return head;
    }
    if(head and head->next)
    {
        swap(head,head->next);
        swaped(head->next->next);
    }
    return temp;
}
int main()
{
    node* head=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        insert(head,arr[i]);
    }
    print(head);
    node* k=swaped(head);
    print(k);
}