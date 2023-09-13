#include<iostream>
using namespace std;
//function overloading
/*
class a
{
    public:
    void fun()
    {
        cout<<"I am a function with no arguments"<<endl;
    }
    void fun(int a)
    {
        cout<<"I am a function with agrument"<<endl;
    }
    void fun(double a)
    {
        cout<<"I am a function with double agrument"<<endl;
    }
};
int main()
{
    a obj;
    obj.fun();
    obj.fun(8);
    obj.fun(4.451564);
}
*/
//operator overloading
/*
class complex
{
    private:
    int real,imag;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    complex operator + (complex const &obj)
    {
        complex result;
        result.imag=imag+obj.imag;
        result.real=real+obj.real;
        return result;
    }
    void display()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};
int main()
{
    complex c1(12,7);
    complex c2(6,117);
    complex c3=c1+c2;
    c3.display();

}
*/
//virtual overloading 
class base
{
    public:
    virtual void print()
    {
        cout<<"this is the base class"<<endl;
    }
    void display()
    {
        cout<<"this is the base class display function"<<endl;
    }
};
class derived :public base
{
    public:
    void print()
    {
        cout<<"this is the derived class"<<endl;
    }
    void display()
    {
        cout<<"this is the derived class display function"<<endl;
    }
};
int main()
{
    base *basepointer;
    derived d;
    basepointer=&d;
    basepointer->print();
    d.display();
    basepointer->display();
    //even when we have saved the address of base derived into base
    //it is not printting derived then use virtual before virtual
}
//compile time                          run time
//function overloading                  virtual overloading        
//operator overloading                      