#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>m;//first-> elements, second-> frequency 
    /*
        If we do not initialize the value to the key the value 
        will we be automatically be 0.
    */
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    unordered_map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"->"<<it->second<<endl;
    }
}