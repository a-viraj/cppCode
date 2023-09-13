#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        count++;
        if(i%3==0)
        {
            n++;
        }
    }
    cout<<count;
}