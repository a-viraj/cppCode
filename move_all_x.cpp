#include<iostream>
using namespace std;
string moveall(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char c=s[0];
    string ch=moveall(s.substr(1));
    if(c=='x')
    {
        return ch+c;
    }
    return c+ch;
}
int main()
{
    string a="zxcvzxczxc";
    cout<<moveall(a);
}