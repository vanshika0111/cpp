// passing objects as function arguments

#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
    private:
        int a;
        int b;

    public:
        void SetData(int v1, int v2)
        {
            a=v1;
            b=v2;
        }

        void SetDataBySum(Complex o1, Complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void display(void)
        {
            cout << "Complex number = " << a << " + " << b << "i" <<endl;
        }
};

// main function
int main()
{
    Complex c1,c2,c3;

    c1.SetData(1,2);
    c1.display();

    c2.SetData(3,4);
    c2.display();

    c3.SetDataBySum(c1,c2);
    c3.display();

    return 0;
}