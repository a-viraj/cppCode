#include<iostream>
#include<vector>
using namespace std;
int check(int** arr,int a,int b,int n)
{
    int count=0;
    int i=a,j=b;
    while(j>=0)
    {
        if(arr[i][j--]!=0)
        {
            count++;
        }
        if(arr[i][j]==1)
        {
            break;
        }
    }
    i=a,j=b;
    while(j<n)
    {
        if(arr[i][j++]!=0)
        {
            count++;
        }
        if(arr[i][j]==1)
        {
            break;
        }
    }
    i=a,j=b;
    while(i>=0||j>=0)
    {
        if(arr[i--][j--]!=0)
        {
            count++;
        }
        if(arr[i][j]==1)
        {
            break;
        }
    }
    i=a,j=b;
    while(i>=0||j<n)
    {
        if(arr[i--][j++]!=0)
        {
            count++;
        }
        if(arr[i][j]==1)
        {
            break;
        }
    }
    i=a,j=b;
    while(i<n||j>=0)
    {
        if(arr[i++][j--]!=0)
        {
            count++;
        }
        if(arr[i][j]==1)
        {
            break;
        }
    }
    i=a,j=b;
    while(i<n||j<n)
    {
        if(arr[i++][j++]!=0)
        {
            count++;
        }
        if(arr[i][j]==1)
        {
            break;
        }
    }
    return count;
}
int main()
{
    pair<int,int>a;
    int n,k;
    cin>>n>>k;
    cin>>a.first>>a.second;
    int** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0;i<k;i++)
    {
        int j,k;
        cin>>j>>k;
        arr[j][k]=1;
    }
    cout<<check(arr,a.first,a.second,n);
    
    
}
  