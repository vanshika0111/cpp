// program to calculate and print roots of a quadratic equation ax^2 + bx + c = 0 (a!=0)

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a, b, c, root1, root2, delta;
    cout << "The quadratic equation is: ax^2 + bx + c = 0" << endl;
    cout << "Enter value of a: " ;
    cin >> a;
    cout << "\n Enter value of b: ";
    cin >> b;
    cout << "\n Enter value of c: ";
    cin >> c;
    cout << endl;

    if (!a)   // a=0
    {
        cout << "Value of a shoudln't be zero" << endl;
        cout << "Aborting!" << endl;
    }

    else
    {
        delta = b * b -4 * a * c;
        
        if (delta >0)
        {
            root1 = ( -b + sqrt(delta)) / (2*a);
            root2 = ( -b - sqrt(delta)) / (2*a);
            cout << "Roots are REAL and UNEQUAL" << endl;
            cout << "Root one = " << root1 << endl;
            cout << "Root two = " << root2 << endl;
        }
    

        else if (delta == 0)
        {
            root1 = -b / (2*a);
            cout << "Roots are REAL and EQUAL" << endl;
            cout << "Root one = " << root1 << endl;
            cout << "Root two = " << root2 << endl;
        }

        else
        {
            cout << "Roots are COMPLEX and IMAGINARY" << endl;
        }
    }
    return 0;
}