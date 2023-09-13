//selection sort
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }int min;
    for(int i=0;i<n-1;i++)
    {   
        
        for(int j=i+1;j<n;j++)
        {
            min=arr[i];
            if(arr[i]>arr[j])
            {
                arr[i]=arr[j];
                arr[j]=min;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<' ';
}
/*time compelxity will be n^2*/