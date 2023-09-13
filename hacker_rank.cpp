#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int z=0,k=1;
    cout<<z<<" "<<k<<" ";
    for(int i=0;i<a;i++)
    {
        int p=z+k;
        cout<<p<<" ";
        z=k;
        k=p;


    }
}
