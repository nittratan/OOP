#include<iostream>
using namespace std;
class Ractangle
{
private:
    int length;
    int breadth;
public:
    // Default Constructor
    Ractangle(){
        length=0;
        breadth=0;
    }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
   // Ractangle rec();
    
    // cout<<"area if ractangle = "<<rec.area()<<endl;
    Ractangle r;
    cout<<r.area()<<endl;
    return 0;
}

