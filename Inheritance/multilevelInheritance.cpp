#include <iostream>
using namespace std;
class base {
    public:
        int m;
        void getdata ()
        {
        cout << "Enter the value of m = "; cin >> m;
        }
};
class derive1 : public base {
    public:
        int n;
        void readdata ()
        {
        cout << "Enter the value of n = "; cin >> n;
        }
};
class derive2 : public derive1
{
    private:
        int o;
        public:
        void indata()
        {
        cout << "Enter the value of o = "; cin >> o;
        }
        void product()
        {
        cout << "Product = " << m * n * o;
        }
};
int main ()
{
    derive2 p;
    p.getdata();
    p.readdata();
    p.indata();
    p.product();
    return 0;
}