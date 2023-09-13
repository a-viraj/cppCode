//hiding sensitive data from user
#include<iostream>
using namespace std;
class a
{
    public:
    int a;
    void funcA()
    {
        cout<<"funcA"<<endl;
    }
    int b;
    void funcB()
    {
        cout<<"funcB"<<endl;
    }
    int c;
    void funC()
    {
        cout<<"funC"<<endl;
    }
    ~a()
    {
        cout<<"hello";
    }
};
int main()
{
    a obj;

    obj.funcA();
    /*
    obj.funcB();
    obj.funC();
    */
}
//private cannot be accessed from outside of class
//protected can be accessed from derived class
//public is for everyone