/*
TOPIC: Single Inheritance In C++!!

POINT:
1. This is the most basic type of inheritance
2. It requires only one base class and one derived class.

Single inheritance is defined as the inheritance in which a derived class is 
inherited from the only one base class. Where 'A' 
is the base class, and 'B' is the derived class.

*/

// C++ program to explain
// Single inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};

// sub class derived from a single base classes
class Car : public Vehicle {

};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}

