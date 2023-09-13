#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    map<int,int>freq;
    for(int i=0;i<n;i++)
    {
        int pres=freq.size();
        if(freq[v[i]]==0 and pres==k)
        {
            break;
        }
        freq[v[i]]++;
    }
    map<int,int>::iterator it;
    vector<pair<int,int>>p;
    for(it=freq.begin();it!=freq.end();it++)
    {
        if(it->second!=0)
        {
            pair<int,int>l;
            l.first=it->second;
            l.second=it->first;
            p.push_back(l);
        }
        
    }
    sort(p.begin(),p.end(),greater<pair<int,int>>());
    vector<pair<int,int>>::iterator it1;
    for(it1=p.begin();it1!=p.end();it++)
    {
        cout<<it1->second<<" "<<it1->first<<" ";
    }
    cout<<endl;
}