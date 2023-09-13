#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int searchInsertPosition(vector<int>&v,int target)
    {
        return lower_bound(v.begin(),v.end(),target)-v.begin();
    }/*it return the iterating position of the target or just greater than the "supposed position" and "-v.begin" is the way to return the position*/
};
int main()
{
    solution a;
    vector<int>v={1,3,5,6};
    cout<<a.searchInsertPosition(v,5);
}