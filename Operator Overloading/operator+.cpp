// Operator Overloading
// NOTES
// In c++ it is possible to change the behaviour of operator (+,-,*,/)
// But we can change the behaviour for user defined types (class,struct ) only

// Operator + overloading

#include<iostream>
using namespace std;
class Point 
{
private:
    int x;
    int y;
public:
    Point(int x=0,int y=0){
        this->x=x;
        this->y=y; 
    }
    // Operator + Overloading
    Point operator +(const Point& obj){
         Point temp;
         temp.x= x+ obj.x;
         temp.y= y+ obj.y;
         return temp;
    }

    // Operator - Overloading
     Point operator-(const Point& obj){
         Point temp;
         temp.x= x- obj.x;
         temp.y= y- obj.y;
         return temp;
    }

     Point add(const Point& obj){ // Add Objects
         Point temp;
         temp.x= x+ obj.x;
         temp.y= y+ obj.y;
         return temp;
    }

    void print()
    {
        cout<<"x : "<<x<<" y : "<<y<<endl;
    }
};
int main()
{
    Point p1(1,2);
    Point p2(3,4);
    Point p3=p1+p2; 
    p3.print();
    Point p4;
    p4=p3-p1;
    p4.print();

    Point ptr;
    ptr=p3.add(p2);
    ptr.print();
    
    return 0;
}