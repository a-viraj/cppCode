#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    //string a;
    //getline(cin,a);
    /*
    diffrent function of string*/
    /*
    string s1="fam",s2="ily";
    //append
    s1.append(s2);//used to append
    cout<<s1;
*/
    //string s1="famnksjdvbskjb",s2="ily.";
   // cout<<s1+s2<<endl;//used tp append
    //cout<<s1[2];
    //to clear the content of a string use clear
    //s1.clear();
    //to comapre the string use compare
    //s1.compare(s2);
    //to check if a string is empty use empty
    //if(s1.empty());
    //cout<<"string is empty";
    //to erase any char in a string use erase
    //cout<<s1.erase(3,3);//first parameter :index second :number of char to delete
    //to find a char or group of cahr use find
    //cout<<s1.find("fam");//gives the first index of the letter
    //to insert a string in any position of a string use insert
    //cout<<s2.insert(1,"badal");1st:index 2nd:string
    //size od an srting use size
    //cout<<s1.size();s
    //to find the substring of a string use substr
    //string b=s1.substr(2,5);//first index and second size
    //cout<<b;
    //to convert a numerical string to int use stoi
    //string k="78621";
    //int c=stoi(k);
    //cout<<c;
    //to convert int to string use to_string
    //int x=132;
    //string kl=to_string(x)+"156";
    //cout<<kl;
    //to sort a string first include<algorithm>and use sort
    //sort(s1.begin(),s1.end());
    //cout<<s1;
    //string a="BADAl";
    //transform(a.begin(),a.end(),a.begin(),::tolower);
    /*
    1 and 2 size, 3:start, 4:toupper or lower */
    //cout<<a;
    string a="789456123";
    sort(a.begin(),a.end(),greater<int>());
    string ml="nkjbcjdcniguhruvbjdsviurbvj";
    cout<<a<<endl;
    //to reverse a string use reverse
    reverse(a.begin(),a.end());
    cout<<a;
}