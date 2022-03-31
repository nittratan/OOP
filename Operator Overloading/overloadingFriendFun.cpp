/*
Friend function
if are using two or more objects in the parameter. Then we have to
make use of friend.
when both are of same class then we have 2 options.
1. make operator as a member of class
2. make it as friend
when 2 arguments are from different classes then there is only 1
option that is friend function 
*/

#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex(int r=0,int i=0)
        {
            real=r;
            img=i;
        }

        friend Complex operator+(Complex c1,Complex c2);
        
        void Display()
        {
            cout<<real<<"+i"<<img<<endl;
        }
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    Complex c1(3,4);
    Complex c2(2,3);
    Complex c3;
  //  c3=c1.add(c2);
  // + overloaded
    c3=c1+c2;
    c3.Display();

    Complex c4;
    c4=operator+(c2,c3);
    c4.Display();
    
    return 0;
}
