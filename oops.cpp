#include<iostream>
#include<cstdlib>
using namespace std;
/*
class student
{
    string name;
    public:
    
    int age;
    bool gender;
    void getname(string s)
    {
        name=s;
    }
   void setname(string s)
   {
       name=s;
   }
   void printInfo()
   {
       cout<<"Name:"<<name<<endl;
       cout<<"Age"<<age<<endl;
        cout<<"gender"<<gender<<endl;
   }
};
int main()
{
    student a;
    string s;
    cin>>s;
    a.getname(s);
    a.age=19;
    a.gender=0;
   student arr[3];
   for(int i=0;i<3;i++)
   {
       /*
       string s;
       cout<<"Name :";
       cin>>s;
       arr[i].setname(s);
       cout<<"age:";
       cin>>arr[i].age;
       cout<<"gender:";
       cin>>arr[i].gender;
       
   }
   system("cls");
   for(int i=0;i<3;i++)
   {
       arr[i].printInfo();
   }
   
}
*/
//parameterised constructor
/*
class stu
{
    public:
    string a;
    int age;
    stu(string s,int l)
    {
        a=s;
        age=l;
    }
    void printinfo()
    {
        cout<<"name="<<a<<endl;
        cout<<"age="<<age<<endl;
    }
};
int main()
{
    stu a("badal",19);
    a.printinfo();
}
*/
/*when we are not giving any parameters in the main function
we are supposed to use default constructor i.e. 
stu()
{
    ....some argument
}
*/
//copy constructor or deep copy
/*
class stu
{
    public:
    string name;
    int age;
    stu(string s,int l)
    {
        name=s;
        age=l;
    }
    void printinfo()
    {
        cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
    }
    stu(stu &a)
    {
        name = a.name;
        age=a.age;

    }
};
int main()
{
    stu a("badal",26);
    stu c=a;
    c.printinfo();
}
*/
//distructor
/*
class stu
{
    public:
    string a;
    int age;
    stu(string s,int l)
    {
        a=s;
        age=l;
    }
    void printinfo()
    {
        cout<<"name="<<a<<endl;
        cout<<"age="<<age<<endl;
    }
    
    
};
int main()
{
    stu a("badal",26);
    stu c=a;
    c.printinfo();
    return 0;
}
*/
//operator overload
class student
{
    public:
    string name;
    int age;
    student(string a,int b)
    {
        name=a;
        age=b;
    }
    student()
    {
        cout<<"badal"<<endl;
    }
    void print()
    {
        cout<<"name ="<<name<<endl;
        cout<<"age="<<age<<endl;
    }
    student(student &a)
    {
        name=a.name;
        age=a.age;
    }
};
int main()
{
    student a("badal",19);
    a.print();
    student b;
    student c=a;
    
    c.print();
    return 0;
}