#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int n,int m,int min)
{
    int stureq=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>min)
        {
            return false;
        }
        if(sum+arr[i]>min)
        {
            stureq++;
            sum=arr[i];
            if(stureq>m)
            {
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;

}
int allocateMin(int arr[],int n,int m)
{
    int sum=0;
    if(n<m)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int start=0,end=sum,ans=INT_MAX;
    while(start<=end)
    {
        int mid=(start+mid)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={12,34,67,90};
    int n=4, m=2;
    cout<<"The minimum number of pages:"<<allocateMin(arr,n,m)<<endl;
    cout<<endl;
    return 0;
}