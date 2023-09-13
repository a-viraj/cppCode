#include<iostream>
using namespace std;
void solve(string ip,string op)
{
    if(ip.length()==0)
    {
        cout<<op<<" ";
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}
int main()
{
    solve("aab","");
}
/*
#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void subset(string ip,string op)
{
    if(ip.size()==0)
    {
        v.push_back(op);
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    subset(ip,op1);
    subset(ip,op2);
}
vector<string >ans(string ip,string op)
{
    subset(ip,op);
    set<string>s;
    for(auto i:v)
    {
        s.insert(i);
    }
    v.clear();
    for(auto i: s)
    {
        v.push_back(i);
    }
    return v;
}
int main()
{
    vector<string>a=ans("aab","");
    for(auto i:a)
    {
        cout<<i<<" ";
    }
}
*/