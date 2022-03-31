// + operator overloaded
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
        // Normal Add
        // Complex add(Complex x)
        // {
        //     Complex temp;
        //     temp.real=real+x.real;
        //     temp.img=img+x.img;
        //     return temp;
        // }

        // + operator Overloaded
        Complex operator+(Complex x)
        {
            Complex temp;
            temp.real=real+x.real;
            temp.img=img+x.img;
            return temp;
        }
        
        void Display()
        {
            cout<<"Real Part = "<<real<<endl;
            cout<<"Imaginary Part = "<<img<<endl;
        }
};
int main()
{
    Complex c1(3,4);
    Complex c2(2,3);
    Complex c3;
  //  c3=c1.add(c2);
  // + overloaded
    c3=c1+c2;
    c3.Display();
}
