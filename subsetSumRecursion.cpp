#include<bits/stdc++.h>
using namespace std;
bool helper(vector<int>&v,int sum,int i,int n,int currsum)
{
    if(sum==currsum)
    {
        return true;
    }
    if(i>n)
    {
        return false;
    }
    if(currsum>sum)
    {
        return false;
    }
    return helper(v,sum,i+1,n,currsum+v[i]) or helper(v,sum,i+1,n,currsum);
}
bool isSubset(vector<int>&v,int sum){
    return helper(v,sum,0,v.size(),0);
}
int main()
{
    vector<int>v={2,3,7,8,10};
    cout<<isSubset(v,50);
}