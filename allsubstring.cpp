#include<iostream>
using namespace std;
void subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char c=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+c);
}
int main()
{
    subseq("abc","");
}