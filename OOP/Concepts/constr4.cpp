// parametrized constructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        Complex(int, int);    // default constructor

        void print(void)
        {
            cout << "Number: " << a << " + " << b << "i" << endl;
        }
};

Complex :: Complex(int x, int y)// ---> parametrized contructor (two arguments)
{
    a=x;
    b=y;
}

int main()
{
    // Complex c;    --> throws an error as now its parametrized constructor

    // 1. implicit call to constructor
    Complex a(3,6);

    // 2. explicit call to constructor
    Complex b = Complex(1,6);

    a.print();
    b.print();

    return 0;
}