#include<iostream>
using namespace std;
class Test
{
    public:
        Test()
        {
            cout<<"Constructor Is Called"<<endl;
        }
        // Destructor
        ~Test()
        {
            cout<<"Destructor Is Called"<<endl;
        }
};
int main()
{
    Test t1;
    Test t2;
    return 0;
}






// Constructor Is Called
// Constructor Is Called
// Destructor Is Called
// Destructor Is Called