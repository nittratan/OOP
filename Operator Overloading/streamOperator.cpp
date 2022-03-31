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

        friend ostream & operator<<(ostream &out,Complex &c);

};
ostream & operator<<(ostream &out,Complex &c){
    out<<c.real<<"+i"<<c.img<<endl;
   // return out;
}

int main()
{
    Complex c1(3,4);
    Complex c2(2,3);
    Complex c3;
    cout<<c1;
    operator<<(cout,c2);
    return 0;
}
