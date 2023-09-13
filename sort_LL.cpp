#include<iostream>
#include<vector>
#include<algorithm>
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
    node* temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
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
void sorting(node* head)
{
    node* temp=head;
    vector<int>a;
    while(temp!=NULL)
    {
        a.push_back(temp->data);
        temp=temp->next;
    }
    sort(a.begin(),a.end());
    for(auto z:a)
    {
        cout<<z<<" ";
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    int arr[]={6,5,4,3,2,1};
    for(int i=0;i<6;i++)
    {
        insert(head,arr[i]);
    }
    print(head);
    sorting(head);
}