#include<iostream>
using namespace std;
class Ractangle
{
    int length;
    int breadth;
    public:
        Ractangle(int l,int b);
        int getLength();
        int getBreadth();
        void setLength(int l);
        void setBreadth(int b);
        int area();
        int perimeter();
};
Ractangle::Ractangle(int l=0,int b=0)
{
    length=l;
    breadth=b;
}
void Ractangle ::setLength(int l)
{
    length=l;
}
void Ractangle ::setBreadth(int b)
{
    breadth=b;
}
int Ractangle ::getLength()
{
    return length;
}
int Ractangle ::getBreadth()
{
    return breadth;
}
int Ractangle ::area()
{
    return length*breadth;
}
int Ractangle :: perimeter()
{
    return 2*(length+breadth);
}
class Cuboid : public Ractangle
{
    int height;
    public:
        Cuboid(int l=0,int b=0,int h=0);
        int getHeight();
        void setHeight(int h);
        int volume();
};
Cuboid::Cuboid(int l,int b,int h)
{
    height=h;
    setLength(l);
    setBreadth(b);
}
void Cuboid ::setHeight(int h)
{
    height=h;
}
int Cuboid ::getHeight()
{
    return height;
}
int Cuboid ::volume()
{
    return getLength()*height*getBreadth();
}
int main()
{
    Ractangle r;
    r.setLength(5);
    r.setBreadth(10);
    cout<<r.area()<<endl;
    Cuboid c;
    c.setHeight(2);
    c.setBreadth(6);
    c.setLength(5);
    cout<<c.area()<<endl;
    cout<<"Volume of Cuboid "<<c.volume();
    return 0;
}