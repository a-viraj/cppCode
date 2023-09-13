//#LIFO
#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st,int ele)
{
    if(st.empty())
    {
    st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}
void reverse(stack<int>&st)
{
    if(st.empty())
    {
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}
int main()
{
    stack<int>st;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        st.push(arr[i]);
    }
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}