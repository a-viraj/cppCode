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
node* reverse(node* &head)
{
    node* pre=NULL;
    node* current=head;
    node* nextptr;
    while(current!=NULL)
    {
        nextptr=current->next;
        current->next=pre;
        pre=current;
        current=nextptr;
    }
    return pre;
}
void display(node* newhead)
{
    node* temp=newhead;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int val)
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
bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteFirst(node* &head);
void deletion(node* &head,int val)
{
    node* temp=head;
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteFirst(head);
    } 
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteFirst(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
node* revrecursuve(node* &head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    
    node* newhead=revrecursuve(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int nodecount(node* &head)
{
    int count=0;
    node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
node* reverseKnode(node* &head,int k)
{
    node* pre=NULL;
    node* current=head;
    node* nextptr;
    int count=0;
    while(current!=NULL && count<k)
    {
        nextptr=current->next;
        current->next=pre;
        pre=current;
        current=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next = reverseKnode(nextptr,k);
    }
    return pre;
}
void fun(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    if(head->next!=NULL)
    {
        fun(head->next->next);
    }
    cout<<head->data<<" ";
}
int main()
{
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i:arr)
    {
        insertAtTail(head,i);
    }
    fun(head);
}
