#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* pre;
    node(int val)
    {
        data=val;
        next=NULL;
        pre=NULL;
    }
};
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->pre=n;

    }
    head=n;
}
void insert(node* &head,int val)
{
    node* n= new node(val);
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->pre=temp;
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
void deleteHead(node* &head)
{
    node* temp=head;
    head=head->next;
    head->pre=NULL;
    delete temp;
}
void deletetion(node* &head,int pos)
{
    node* temp=head;
    if(pos==1)
    {
        deleteHead(head);
        return;
    }
    int count=1;
    while(temp!=NULL&&count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->pre->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->pre=temp->pre;
    }
    delete temp;
}
int main()
{
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    print(head);
    insertAtHead(head,0);
    print(head);
    deletetion(head,1);
    print(head);
}