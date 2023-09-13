#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool compare(const pair<char,int>&a,const pair<char,int>&b);
class solution
{
    public:
    string frequencySort(string s)
    {
        unordered_map<char,int>m;
        string k;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector<pair<char,int>>val(m.begin(),m.end());
        sort(val.begin(),val.end(),compare);
        
        vector<pair<char,int>>::iterator it;
        for(it=val.begin();it!=val.end();it++)
        {
            for(int i=0;i<it->second;i++)
            {
                k+=it->first;
            }
        }
       return k;
    }
};
int main()
{
    solution a;
    string k=a.frequencySort("raaeaedere");
    cout<<k<<endl;
}
bool compare(const pair<char,int>&a,const pair<char,int>&b)
{
    return a.second>b.second;
}