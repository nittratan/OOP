#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
// Not Allowed
// int add(float x,float y)
// {
//     return x+y;
// }
int main()
{
    cout<<add(4,6)<<endl;
    cout<<add(6,3,1)<<endl;
    cout<<add(4.3f,6.7f)<<endl;
    return 0;
}