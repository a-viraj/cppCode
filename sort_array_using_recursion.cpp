#include<iostream>
#include<vector>
using namespace std;
void insert(vector<int>&v,int val)
{
    if(v.size()==0 or v[v.size()-1]<=val)
    {
        v.push_back(val);
        return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    insert(v,val);
    v.push_back(temp);
}
void sort_array(vector<int>&v)
{
    if(v.size()==1)
    {
        return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    sort_array(v);
    insert(v,temp);
}
int main()
{
    vector<int>v={1,4,7,8,5,2};
    sort_array(v);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}