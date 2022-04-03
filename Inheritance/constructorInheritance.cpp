/*
Always the default constructor in class is to execute it, 
not make a change here in response to something
that is then.

Base class constructor is always first
*/
#include<iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"base class constructor"<<endl;
        }
        Base(int x)
        {
            cout<<"Base class valude "<<x<<endl;
        }
};
class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Driver Class Constructor"<<endl;
        }
        Derived(int y)
        {
            cout<<"Deriver Class Value "<<y<<endl;
        }
        Derived(int x,int y):Base(x) // Inherit Consturctor of Base class
        {
            cout<<"drived value of y "<<y<<endl;
        }
};
int main()
{
    Derived d;


    Derived d2(3);

    Derived d3(4,5);
    return 0;
}