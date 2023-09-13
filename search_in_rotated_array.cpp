#include<iostream>
using namespace std;
int searchInRotatedArray(int arr[],int key,int left,int right)
{
    if(left>right)
    {
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(arr[left]<arr[mid])
    {
        if(key>=arr[left] and key<=arr[mid])
        {
            return searchInRotatedArray(arr,key,left,mid-1);
        }
        return searchInRotatedArray(arr,key,mid+1,right);
    }
    if(key>arr[mid] and key<arr[right])
    {
        return searchInRotatedArray(arr,key,mid+1,right);
    }
    return searchInRotatedArray(arr,key,left,mid-1);
}
int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int n=8;
    int key=8;
    int i=searchInRotatedArray(arr,key,0,7);
    if(i==-1)
    {
        cout<<"Key doesn't exist"<<endl;
    }
    else{
        cout<<"Key is present at inder: "<<i<<endl;
    }
    return 0;
}