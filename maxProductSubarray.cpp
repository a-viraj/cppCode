#include<bits/stdc++.h>
#define vi(a) vector<int>a
#define fo(i,n) for(int i=0;i<n;i++)
#define pb(a) push_back(a)
using namespace std;
class Solution
{
public:
    int maxProduct(vector<int>& nums) {
       int maxP=INT_MIN; int p=1;
       for(int i=0;i<nums.size();i++)
       {
            p*=nums[i];
            maxP=max(maxP,p);
            if(p==0){
                p=1;
            }
       }
       p=1;
       for(int i=nums.size()-1;i>=0;i--)
       {
            p*=nums[i];
            maxP=max(maxP,p);
            if(p==0){
                p=1;
            }
       }
       return maxP;

    }
};
int main()
{
    Solution s;
    vi(a)={6,-3,-10,0,2};
    cout<<s.maxProduct(a);
    return 0;

}