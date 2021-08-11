// multiple inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

// first base class
class Base1
{
    protected:
        int base1;
    public:
        void set_base1(int a)
        {
            base1 = a;
        }
};

// second base class
class Base2
{
    protected:
        int base2;
    public:
        void set_base2(int a)
        {
            base2 = a;
        }
};

// derived class
class Derived : public Base1, public Base2
{
    public:
        void display(void)
        {
            cout << "Value of base 1 is " << base1 << endl;
            cout << "Value of base 2 is " << base2 << endl;
            cout << "Addition of base 1 & base 2 is " << base1+base2 << endl;
        }
};

/*
The inherited derived class will have the following resemblences:
Data members:
    base1 --> protected
    base2 --> protected
Member functions:
    set_base1() --> public
    set_base2() --> public
    display() --> public
*/

// main function
int main()
{
    Derived one;
    one.set_base1(3);
    one.set_base2(2);
    one.display();
    return 0;
}