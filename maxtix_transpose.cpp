#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    system("cls");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}