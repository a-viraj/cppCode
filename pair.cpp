
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>a;
    int n;
    cin>>n;
    int y=0;
    for (int i = 0; i < n; i++)
    {
        cin>>y;
        a.push_back(y);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mycompare(pair<int,int>p1,pair<int ,int>p2)
{
    return p1.first<p2.first;
}
int main()
{
    pair<int, int>p;
    p.first=3;
    p.second=45;

int arr[]={10,16,7,75,15,98,3,4,8,6};
vector<pair<int,int>> v;
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
{
    v.push_back(make_pair(arr[i],i));
}
sort(v.begin(),v.end(),mycompare);
for(auto it:v)
{
    cout<<it<<endl;
}
}
//bullshit*/
