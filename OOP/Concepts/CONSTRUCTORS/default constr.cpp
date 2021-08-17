// constructor
// default constructor 

/*
--> it is a special member function.
--> it has same name as that of the class.
--> automatically invoked whenever an object is created
--> used to initialize the objects of its class
--> it may/ may not require a return type
*/

/*
properties of constructor:
1. declared in the public section of the class
2. invoked automatically when object is created/declared
3. do not have return type & do not return types
4. can have default arguments
5. cannot refer to their address
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        Complex(void);    // default constructor

        void print(void)
        {
            cout << "Number: " << a << " + " << b << "i" << endl;
        }
};

Complex :: Complex(void)// ---> default contructor (no arguments)
{
    a=10;
    b=8;
    // a=0;
    // b=0;
    // even if the values are zero, declare them
    // or else they will attain garbage values
}

int main()
{
    Complex c;    // object declaration

    c.print();

    return 0;
}