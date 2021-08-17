// pointer pointing object --> how pointer uses public of class

#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
    int real, imaginary;

    public:
        void Getdata()
        {
            cout << "The real part is " << real << endl;
            cout << "The imaginary part is " << imaginary << endl;
        }
        void SetData(int a, int b)
        {
            real = a;
            imaginary = b;
        }
};

int main()
{
    // case 1: object declaration
    Complex c1;
    c1.SetData(4,6);
    c1.Getdata();

    // case 2: pointer pointing object
    Complex *ptr = &c1;
    (*ptr).SetData(4,6);
    (*ptr).Getdata();
    
    // case 3: new operator [array of objects]
    Complex *ptr1 = new Complex[4];
    // (*ptr1).SetData(4,6);
    ptr1->SetData(4,6);
    // above two lines are equivalent
    //  -> means ptr is pointing to a particular object/method
    // (*ptr1).Getdata();
    ptr1->Getdata();
    // above two lines are equivalent
    return 0;
}