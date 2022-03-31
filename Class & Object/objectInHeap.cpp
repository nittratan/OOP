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
    Ractangle *p;
    // p= new Ractangle
    p= new Ractangle();
    p->length=10;
    p->breadth=5;
    cout<<p->area()<<endl;

    // Another Way To create Object in Heap

    Ractangle *q = new Ractangle;
    q->length=5;
    q->breadth=15;
    cout<<q->perimeter()<<endl;
    return 0;
}