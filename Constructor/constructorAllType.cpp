#include<iostream>
using namespace std;

class Ractangle
{
    private:
        int length;
        int breadth;

    public:
        void setLength(int l)
        {
            length=l;
        }

        void setBreadth(int b)
        {
            breadth=b;
        }

        int getLength()
        {
            return length;
        }

        int getBreadth()
        {
            return length;
        }

        // Default Constructor
        // Ractangle()
        // {
        //     length=0;
        //     breadth=0;
        // }

        //Parameterized Constructor
        // Ractangle(int l ,int b)
        // {
        //     setLength(l);
        //     setBreadth(b);
        // }
        // Constructor With Default Arguments
         Ractangle(int l=0 ,int b=0) // If we write default argument then there is no need of default constructor
        {
            setLength(l);
            setBreadth(b);
        }

        // Copy Constructor 
        Ractangle(Ractangle &ract)
        {
            length=ract.length;
            breadth=ract.breadth;
        }

        int area()
        {
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};
int main()
{
   //Ractangle r1; // Default
    Ractangle r2(10,5); // Parameter
    Ractangle R; // Constructor With Default Arguments
    Ractangle copyCons(r2); // Copy
    
    // cout<<"Length "<<r1.getLength()<<endl;

    // Assignment Operator 
    Ractangle r3=r2;
    cout<<"Area Of Ractangle "<<r3.area()<<endl;

    cout<<"Length "<<R.getLength()<<endl;
    cout<<r2.area()<<endl;
    cout<<copyCons.perimeter()<<endl;
    return 0;
}

