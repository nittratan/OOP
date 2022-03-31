#include<iostream>
using namespace std;

class deepConstructor
{
private:
    /* data */
    int n;
    int *p;
public:
    // Deep Copy Constructor
    deepConstructor(int x)
    {
        n=x;
        p=new int[n];
        cout<<p<<endl;
    }
    deepConstructor(deepConstructor &d)
    {
        n=d.n;
        //p=d.p; // It will Point same Memory SO Avoid It 
        p=new int[n];
        cout<<p<<endl;
    }
    void insertArray()
    {
        int count=1;
        for(int i=0;i<n;i++)
            p[i]=count++;
    }
    void print()
    {
        for(int i=0;i<n;i++)
            cout<<p[i]<<" ";
        cout<<endl;
    }
    
};
int main()
{
    deepConstructor d1(5);
    deepConstructor d2(d1);
    d2.insertArray();
    d2.print();
}