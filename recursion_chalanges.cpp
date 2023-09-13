#include<iostream>
#include<cstdlib>
using namespace std;
/*
void dec(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
int main()
{
    int n;
    cin>>n;
    system("cls");
    dec(n);
}
*/
/*
void inc(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    inc(n);
}
//in the baove question once it reaches 1 then it reurns and cout is called
*/
int firstocc(int arr[],int n, int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key)
{
    if(i==0)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return lastocc(arr,n,i-1,key);
}
int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,6,2)<<endl;
}