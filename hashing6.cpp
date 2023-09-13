#include<iostream>
#include<map>
#include<unordered_map>
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
    int s=0,ans=INT_MAX;
    for(int i=0;i<k;i++)
    {
        s+=v[i];
    }
    cout<<s<<" ";
    ans=min(s,ans);
    for(int i=1;i<n;i++)
    {
        s-=v[i-1];
        s+=v[i+k-1];
        ans=min(ans,s);
        cout<<s<<" ";
    }
    cout<<endl;
    cout<<ans;
}