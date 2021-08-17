// constructor initialization in constructor

/*
Syntax for initialization kist in constructor:
    Constructor (argument list) : initialization-section
    {
        code
    }
*/

#include<iostream>
#include<stdlib.h>
using namespace std;




class Test
{
    int a,b;

    public:
        // Test(int i, int j) : a(i), b(j) 
        // Test(int i, int j) : a(j), b(i)
        // Test(int i, int j) : a(i+j), b(i+j)
        // Test(int i, int j) : a(i), b(i)
        // Test(int i, int j) : a(j), b(2*j)
        // Test(int i, int j) : a(i), b(a+j)
        // Test(int i, int j) : b(a+j), a(i)
        // Test(int i, int j) : b(j), a(i+b) --> garbage value as a should be initialized first
        // Test (int i, int j) : a(i) --> b will take garbage value
        Test (int i, int j)
        {
            a=i;
            b=j;
            cout << "Constructor executed" << endl;
            cout << "Value of a is " << a << endl;
            cout << "Value of b is " << b << endl;
        }
};

int main()
{
    Test obj(3,8);
    return 0;
}