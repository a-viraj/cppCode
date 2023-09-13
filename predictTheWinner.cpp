#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int recursion(vector<int>&v,int i,int j)
    {
        if(i>j)
        {
            return 0;
        }
        int choise1=v[i]+min(recursion(v,i+2,j),recursion(v,i+1,j-1));
        int choise2=v[j]+min(recursion(v,i,j-2),recursion(v,i+1,j-1));
        return max(choise1,choise2);
    }
    bool predict(vector<int>&v)
    {
        int n=v.size();
        int bestScore=recursion(v,0,n-1);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        if(bestScore>=sum-bestScore)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Solution a;
    vector<int>v={1,5,2};
    cout<<a.predict(v);
}