#include<iostream>
#include<bits/stdc++.h>
#include<deque>
#include<vector>
using namespace std;
/*
int main()
{
    deque<int>dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(12);
    dq.push_front(0);
    dq.pop_front();
    cout<<dq.front()<<endl;
    for(auto i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
*/
//sliding window maximum
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    deque<int>q;
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
        while(q.empty() and a[q.back()]<a[i])
        {
            q.push_back(i);
        }
        ans.push_back(a[q.front()]);
        for(int i=k;i<n;i++)
        {
            if(q.front()==i-k)
            {
                q.pop_front();
            }
            while(!q.empty()and a[q.back()]<a[i])
            {
                q.pop_back();
            }
            q.push_back(i);
            ans.push_back(a[q.front()]);
        }
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}