#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
//lcm of a number a=min(a,((i*j)/__gcd(i,j)));

int main()
{
    long long t;
    cin>>t; 
    for(long long i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int a=floor((2*n-k-1)/2);
        cout<<2*a<<endl;
    }
}
