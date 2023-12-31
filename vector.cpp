#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    //or we can use an iterator
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    for(auto element:v)
    {
        cout<<element<<endl;
    }
    v.pop_back();//remove last element
    vector<int> v2(3,50);//we can also initilize the size i.e. 3
    swap(v,v2);//swap the elements of vecor
    sort(v2.begin(),v2.end(),greater<int>());
    for(auto element:v2)
    {
        cout<<element<<endl;
    }
}