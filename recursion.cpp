#include<iostream>
using namespace std;
/*int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}
int main()
{
  int n;
  cin>>n;
  cout<<sum(n);  
}
*/
/*
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);    
}
int main()//factorial
{
    int n;
    cin>>n;
    cout<<fact(n);
}
*/
/*
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*power(n,p-1);
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
}
*/
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<' ';
    }
}