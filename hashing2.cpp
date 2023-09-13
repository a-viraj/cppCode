#include<iostream>
#include<map>//insertion: log(n),accessing: log(n),deletion log(n)
//implimented using red black tree
#include<unordered_map>//insertion: 1,accessing: 1,deletion n
//implimented using hash table
using namespace std;
int main()
{
    map<int ,int >m;
    //first: key, second: data
    m[8]=2;
    cout<<m[8]<<" ";
    unordered_map<int,int>um;
    m[1]=78;
    cout<<m[1]<<" ";
}