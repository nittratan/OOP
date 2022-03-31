#include<iostream>
using namespace std;
class Rac
{
    public:
    int length;
    int breadth;
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
    Rac r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<r1.area()<<endl;
    r2.length=5;
    r2.breadth=10;
    cout<<r2.perimeter()<<endl;
    return 0;
}