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
void insert(node* &head,int val)
{
    node* n= new node(val);
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
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void evenAfterOdd(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    
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
}