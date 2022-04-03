/*
TOPIC: Inheritance In C++ (Core feature of OOPS in C++)

Q. WHAT IT DOES??
A. It inherits the features/properties/characteristics of Base class into Derived class.
   a. Code Re-usability

TERMINOLOGY: Base/Derived  OR  Parent/Child

TYPES OF INHERITANCE:
1. Single
   A derived class with only one base class is called single inheritance.
2. Multilevel
   A derived class with a base class and that base class is a derived class of another, is called multilevel inheritance.
3. Multiple
   A derived class with multiple base class is called multiple inheritance.
4. Hierarchical
   Multiple derived classes with same base class is called hierarchical inheritance.
5. Hybrid
   Combination of multiple and hierarchical inheritance is called hybrid inheritance.
6. Multipath
   A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.

MODES OF INHERITANCE
1. public  (Visible to everyone)
2. protected (Visible to current class and derived class only)
3. private (Visible to current class only)
*/
#include<iostream>
using namespace std;
class Base
{
    public:
        int x;
        void show()
        {
            cout<<"base class valude "<<x<<endl;
        }
};
class Derived : public Base
{
    public:
        int y;
        void Display()
        {
            cout<<"Derived Class "<< x <<" "<< y<<endl;
        }
};
int main()
{
    Base b;
    b.x=10;
    b.show();
    Derived d;
    d.x=30;
    d.y=50;
    d.show();
    d.Display();
    return 0;
}

