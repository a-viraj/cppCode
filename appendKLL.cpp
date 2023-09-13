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
    node* n=new node(val);
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
int length(node* head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
node* Append(node* &head,int k)
{   
    node* newhead;
    node* newtail;
    node* tail=head;
    int l=length(head);
    int count=1;
    k=k%l;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newtail=tail;

        }
        if(count==l-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
int main()
{
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insert(head,arr[i]);
    }
    print(head);
    node* newhead=Append(head,3);
    print(newhead);
}