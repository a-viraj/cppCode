#include<bits/stdc++.h>
#define vi(a) vector<int>a
#define fo(i,n) for(int i=0;i<n;i++)
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            if(strs[0][i]!=strs[strs.size()-1][i]){
                break;
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};
int main(){
    vector<string>v={"flower","flow","flight"};
    Solution a;
    cout<<a.longestCommonPrefix(v);
}