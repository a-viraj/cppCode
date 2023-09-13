#include<iostream>
#include<vector>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int val[],int wt[],int n,int w)
{
    vector<vector<int>>v(n+1,vector<int>(w+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0 or j==0)
            {
                v[i][j]=0;
            }
            else if(wt[i-1]<=w)
            {
                v[i][j]=max(val[i-1]+v[i-1][j-wt[i-1]],v[i-1][j]);
            }
            else{
                v[i][j]=v[i-1][j];
            }
        }
        
    }
    return v[n][w];
}
int main()
{
int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout<<knapsack(val,wt,n,W);
    return 0;
}
