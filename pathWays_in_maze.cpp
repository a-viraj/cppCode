//could either move in right direction or down direcrion
#include<iostream>
using namespace std;
int CountPath(int n,int i,int j)
{
    if(i==n-1&&j==n-1)
    {
        return 1;
    }
    if(i>=n||j>=n)
    {
        return 0;
    }
    return CountPath(n,i+1,j) + CountPath(n,i,j+1);
}
int main()
{
    cout<<CountPath(3,0,0)<<endl;
}