#include<iostream>
using namespace std;
int smallestSubarraySum(int arr[],int n,int x)
{
    int sum=0;
    int minLength=n+1,start=0,end=0;
    while(end<n)
    {
        while(sum<=x and end<n)
        {
            sum+=arr[end++];
        }
        while(sum>x and start<n)
        {
            if(end-start<minLength)
            {
                minLength=end-start;
            }
            sum-=arr[start++];
        }
    }
    return minLength;
}
int main()
{
    int arr[]={1,4,45,6,10,19};
    int x=51;
    int n=6;
    int minLength=smallestSubarraySum(arr,n,x);
    if(minLength==n+1)
    {
        cout<<"No such subarray exist"<<endl;
    }
    else
    cout<<minLength<<" is the samllest length"<<endl;
}