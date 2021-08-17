// Program to illustrate the use of constructor in inheritance

// Constructor can be used in inheritance although it cannot be inheritted

/*
There are several cases of execution of constructor
CASE 1:
    class B : public A 
        flow of execution of construcot: A() --> B()
    
CASE 2:
    class B : public B, public C
        flow of execution of constructor: B() --> C() --> A()

CASSE 3:
    class A : public B, virtual public C
        flow of execution of constructor: C() --> B() --> A()
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Base1
{
    int data1;

    public:
        Base1(int i)
        {
            data1 = i;
            cout << "Base1 constructor called" << endl;
        }
        void printData1(void)
        {
            cout << "The value of data is " << data1 << endl;
        }
};

class Base2
{
    int data2;

    public:
        Base2(int i)
        {
            data2 = i;
            cout << "Base2 constructor called" << endl;
        }
        void printData2(void)
        {
            cout << "The value of data is " << data2 << endl;
        }
};

class Derived : public Base1, public Base2
{
    int Derived1, Derived2;

    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b)
        {
            Derived1 = c;
            Derived2 = d;
            cout << "Derived class constructor called" << endl;
        }
        void printData(void)
        {
            cout << "The value of derived1 is " << Derived1 << endl;
            cout << "The value of derived2 is " << Derived2 << endl;
        }
};

int main()
{
    Derived obj(1,2,3,4);
    obj.printData1();
    obj.printData2();
    // obj.printData();
    return 0;
}