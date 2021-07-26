// singe inheritance --> private specifier

#include<iostream>
#include<stdlib.h>
using namespace std;

class Base
{
    private:
        int data1;      // not inheritable
    public:
        int data2;
        void setData(void);
        int getData1();
        int getdata2();
};

void Base :: setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base :: getData1()
{
    return data1;
}

int Base :: getdata2()
{
    return data2;
}

// class is derived privately 
class Derived : private Base
{
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process()
{
    setData();
    data3 = data2 * getData1();
}

void Derived :: display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived obj;
    // obj.setData();
    obj.process();
    obj.display();
    return 0;
}