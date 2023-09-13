#include<bits/stdc++.h>
using namespace std;
class Solution {
    void helper(vector<vector<int>>&ans,vector<int>&c,vector<int>&curr,int sum,int target,int i){
        if(i==c.size())return;
        if(sum==target)
        {
            ans.push_back(curr);
            return;
        }
        if(sum>target)
        {
            return;
        }
            int temp=c[i];
            vector<int>curr1=curr;
            curr1.push_back(temp);
            int sum1=sum+temp;
            helper(ans,c,curr,sum,target,i+1);
            helper(ans,c,curr1,sum1,target,i);
        curr.pop_back();
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(ans,candidates,v,0,target,0);
        return ans;
    }
};
int main()
{
    
    vector<vector<int>>ans;
    Solution a;
    vector<int>v={2,3,7,6};
    ans=a.combinationSum(v,7);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}