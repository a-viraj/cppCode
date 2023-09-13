#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(string ip,string op,vector<string> &v)
{
    if(ip.empty())
    {
        v.push_back(op);
        return;
    }
    if(isalpha(ip[0]))
    {
        string op1=op;
        string op2=op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);
        solve(ip,op1,v);
        solve(ip,op2,v);
    }
    else if(isdigit(ip[0]))
    {
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op,v);
    }
}
vector<string> fun(string s)
{
    string ip=s;
    string  op="";
    vector<string>v;
    solve(ip,op,v);
    return v;
}
int main()
{
    vector<string> v=fun("a1B2");
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}