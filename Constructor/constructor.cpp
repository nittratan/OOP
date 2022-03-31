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
    // Parameterized Constructor
    Ractangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    Ractangle rec(5,2);
    cout<<"area if ractangle = "<<rec.area()<<endl;
    return 0;
}

