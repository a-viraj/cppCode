#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>&s,int element)
{
    if(s.size()==0)
    {
        s.push(element);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,element);
    s.push(temp);
}
void reverse(  stack<int>&s)
{
    if(s.size()==1)
    {
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
}
int main()
{
    int arr[]={1,2,3,4,5};
    stack<int>st;
    for(auto i:arr)
    {
        st.push(i);
    }
    stack<int>s=st;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    reverse(st);
    cout<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}