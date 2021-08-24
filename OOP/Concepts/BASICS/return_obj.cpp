// returning objects

#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
    float x,y;

    public:
        void input (float real, float img)
        {
            x = real;
            y = img;
        }
        friend Complex sum(Complex, Complex);
        void show(Complex);
};

Complex sum (Complex c1, Complex c2)
{
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return (c3);
}

void Complex :: show(Complex c)
{
    cout << c.x << " + j" << c.y << endl;
}

int main()
{
    Complex A,B,C;

    A.input(3.1,5.65);
    B.input(2.75,1.2);
    C = sum(A,B);

    cout << "A = ";
    A.show(A);
    cout << "B = ";
    B.show(B);
    cout << "C = ";
    C.show(C);
    
    return 0;
}