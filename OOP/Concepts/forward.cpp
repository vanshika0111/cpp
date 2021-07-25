// importance of forward declaration
// declaring an entire class as friend

#include<iostream>
#include<stdlib.h>
using namespace std;

// forward declaration
class Complex;
/*
compiler reads the code from first line
thus, it is necessary to declare the class and functions at first place 
to maintain the order
*/

class Calculator
{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        int SumRealComplex(Complex, Complex);
        int SumCompComplex(Complex, Complex);
        // here (Complex o1, Complex o2) throws an error
        // because in forward declaration 
        // it wasn't declared the class Complex has arguments
};

class Complex
{
    private:
        int a,b;
        // individually declaring functions as friend
        // friend int Calculator :: SumRealComplex(Complex, Complex);
        // friend int Calculator :: SumCompComplex(Complex, Complex);

        // ALTERNATIVE: Declare the entire Calculator class as friend
        friend class Calculator;

    public:
        void SetNumber(int n1, int n2)
        {
            a=n1;
            b=n2;
        }
        void Display(void)
        {
            cout << "Number = " << a << " + " << b << "i" << endl;
        }
};

int Calculator :: SumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator :: SumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1,o2;

    o1.SetNumber(1,6);
    o2.SetNumber(3,5);
    
    Calculator calci;

    int result_real = calci.SumRealComplex(o1,o2);
    cout << "Sum of real parts is " << result_real << endl;

    int result_complex = calci.SumCompComplex(o1,o2);
    cout << "Sum of complex parts is " << result_complex << endl;

    return 0;
}