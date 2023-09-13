#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    

    int k;
    bool found=false;
    cin>>k;
    int r=0,c=m-1;
    while(r<n&&c>=0)
    {
        if(a[r][c]==k)
        {
            found=true;
        }
        else if(a[r][c]>k)
        c--;

        else
        r++;
    }
    if(found)
    {
        cout<<"found";
    }
    else
    cout<<"not found";
}