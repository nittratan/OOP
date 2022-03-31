#include<iostream>
using namespace std;
class Ractangle
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
    Ractangle r1;
    Ractangle *p;
    p=&r1;
    p->length=10;
    p->breadth=5;
    cout<<p->area()<<endl;
    return 0;
}