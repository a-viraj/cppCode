#include<iostream>
#include<vector>
using namespace std;
int knapsackrec(int wt[],int val[],int w,int n, vector<vector<int>> &m){
    if(n<0)
    {
        return 0;
    }
    if(m[n][w]!=-1)
    {
        return m[n][w];
    }
    if(wt[n]>w){
        m[n][w]= knapsackrec(wt,val,w,n-1,m);
        return m[n][w];
    }
    else{
        m[n][w]=max( val[n] +knapsackrec(wt,val,w-wt[n],n-1,m),knapsackrec(wt,val,w,n-1,m));
        return m[n][w];
    }
}
int knapsack(int wt[],int val[],int w,int n)
{
    vector<vector<int>> m(n+1,vector<int>(w+1,-1));
    return knapsackrec(wt,val,w,n-1,m);
}
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout<<knapsack(wt,val,W ,n);
    return 0;
}