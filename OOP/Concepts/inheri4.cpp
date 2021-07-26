// single inheritance -- > protected

/*
The protected variables are private only.
the only difference between private and protected is that
private isn't inherited
while protected being private is inheritable
*/

/*
                            public specifier    private specifier   protected specifier
1. private members           not inherited        not inherited       not inherited
2. protected members          protected           private             protected
3. public members             public              private             protected

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Base
{
    protected:
        int a;
    private:
        int b;
};

class Derived : protected Base
{
    // blank
};

int main()
{
    Base b;
    Derived d;
    // cout << d.a;  --> throws an error as private in base & derived class
    return 0;
}