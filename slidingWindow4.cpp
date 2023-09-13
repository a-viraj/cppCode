#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
bool ispalindrome(int num)
{
    string s=to_string(num);
    reverse(s.begin(),s.end());
    int n=stoi(s);
    if(n==num)
    {
        return true;
    }
    return false;
}
int findPalindrome(vector<int>arr,int k)
{
    int num=0;
    for(int i=0;i<k;i++)
    {
        num=num*10+arr[i];
    }
    if(ispalindrome(num))
    {
        return 0;
    }
    for(int j=k;j<arr.size();j++)
    {
        num=(num%(int)pow(10,k-1));
        num=num*10+arr[j];
        if(ispalindrome(num))
        {
            return j-k+1;
        }
    }
    return -1;
}
int main()
{
    vector<int>arr={2,3,5,1,1,5};
    int k=4;
    int ans=findPalindrome(arr,k);
    if(ans==-1)
    {
        cout<<"Palindrome subarray doesn't exist"<<endl;
    }
    else{
        for(int i=ans;i<ans+k;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}