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
    Ractangle rec;
    rec.setLength(10);
    rec.setBreadth(15);
    cout<<"Length "<<rec.getLength()<<endl;
    cout<<rec.area()<<endl;
    cout<<rec.perimeter()<<endl;
    return 0;
}

