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
     //spiral auto print
     int row_start=0,row_end=n-1,coloumn_start=0,coloumn_end=m-1;
    while(row_start<=row_end&&coloumn_start<=coloumn_end)
    {
        //start row
        for(int col=coloumn_start;col<=coloumn_end;col++)
        {
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        //coloumn end
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<a[row][coloumn_end]<<" ";
        }
        coloumn_end--;
        for(int col=coloumn_end;col>=coloumn_start;col--)
        {
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        //coloumn start
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<a[row][row_start]<<" ";
        }
        coloumn_start++;
    }
}