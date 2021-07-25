// copy constructor

// copy constructor makes copy of other objects

#include<iostream>
#include<stdlib.h>
using namespace std;

class Number
{
    int a;

    public:
        Number()          // default constructot
        {
            a=0;
        }

        Number(int num)  // parametrized constructor
        {
            a=num;
        }

        Number(Number &obj)  // copy constructor
        {
            cout << "Copy constructor " << endl;
            a=obj.a;
        }
        // try to run the code by commenting out this copy constructor

        void display(void)
        {
            cout << "The number for this object is " << a << endl;
        }
};
int main()
{
    Number x,y,z(9),z2;

    x.display();
    y.display();
    z.display();

    Number z1(x);
    z1.display();
    
    // z2=z --> no copy constructor is called, throws an error_category
    Number z3 = z;   // --> this is valid
    // if you need copy constructor, declare object separately
    z3.display();

    // if there's no copy constructor, 
    // compiler will provide its own copy constructor
    
    return 0;
}