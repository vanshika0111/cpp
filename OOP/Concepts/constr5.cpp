// constructor overloading

#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
    private:
        int x,y;

    public:
        Complex(int a, int b)   // parametrized constructor
        {
            x=a;
            y=b;
        }

        Complex(int a)   // parametrized constructor
        {
            x=a;
            y=0;
        }

        Complex()   // default constructor
        {
            x=0;
            y=0;
        }

        void display(void)
        {
            cout << "Number is " << x << " + " << y << "i" << endl;
        }
};

int main()
{
    Complex c1(3,6);
    c1.display();

    Complex c2(6);
    c2.display();

    Complex c3;
    c3.display();

    return 0;
}