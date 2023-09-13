#include<bits/stdc++.h>
#define vi(a) vector<int>a
#define fo(i,n) for(int i=0;i<n;i++)
#define pb(a) push_back(a)
using namespace std;
class Solution
{
public:
      int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(int i:nums)
        {
            q.push(i);
        }   
        for(int i=0;i<k-1;i++)
        {
            q.pop();
        }
        return q.top();
    }
};
int main()
{
    Solution a;
    vi(ans)={3,2,3,1,2,4,5,5,6};
    cout<<a.findKthLargest(ans,4);
    return 0;
}