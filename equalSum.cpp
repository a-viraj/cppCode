// #include<bits/stdc++.h>
// #define vi(a) vector<int>a
// #define fo(i,n) for(int i=0;i<n;i++)
// #define pb(a) push_back(a)
// using namespace std;
// bool helper(int arr[],int n,int sum,vector<vector<int>>&v){
//     if(n<0)return false;
//     if(sum==0)return true;
//     if(arr[n-1]>sum){
//         return v[n][sum]=helper(arr,n-1,sum,v);
//     }
//     if(v[n][sum]!=-1)return v[n][sum];
//     return v[n][sum]=helper(arr,n-1,sum-arr[n-1],v) || helper(arr,n-1,sum,v);
// }
// bool equalSum(int arr[],int n){
//     int sum=0;

//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     if(sum%2!=0)
//     {
//         return false;
//     }
//     vector<vector<int>>v(n+1,vector<int>(sum+1,-1));
//     return helper(arr,n,sum/2,v);
// }
// int main()
// {
//     int arr[]={1,5,5,11};
//     cout<<equalSum(arr,4);
//     return 0;
// }


#include<bits/stdc++.h>
#define vi(a) vector<int>a
#define fo(i,n) for(int i=0;i<n;i++)
#define pb(a) push_back(a)
using namespace std;
bool helper(int arr[],int n,int sum){
    vector<vector<int>>v(sum+1,vector<int>(n+1));
    for(int i=0;i<n;i++){
        v[0][i]=true;
    }
    for(int i=1;i<sum;i++){
        v[i][0]=false;
    }
    for(int i=1;i<=sum;i++)
    {
        for(int j=1;j<=n;j++)
        {
            v[i][j]=v[i][j-1];
            if(i>=arr[j-1]){
                v[i][j]=v[i][j] || v[i-arr[j-1]][j-1];
            }
        }
    }
    return v[sum][n];

}
bool equalSum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    if(sum%2!=0)
    {
        return false;
    }
    return helper(arr,n,sum/2);
}
int main()
{
    int arr[] = { 1,5,5,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<equalSum(arr,n);
    return 0;
}