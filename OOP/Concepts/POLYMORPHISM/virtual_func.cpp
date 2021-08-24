// virtual function

#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base=1;
        void display(void)
        {
            cout << "1. Displaying base class" << endl;
        }
        virtual void show(void)
        {
            cout << "1. Displaying base class variable" << var_base << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derive=2;
        void display(void)
        {
            cout << "2. Displaying base class variable" << var_base << endl;
            cout << "2. Displaying derived class variable" << var_derive << endl;
        }
        void show (void)
        {
            cout << "2. Displaying derived class" << endl;
        }
};

int main()
{
    BaseClass B;
    DerivedClass D;
    BaseClass *bptr;

    cout << "bptr points to base class" << endl;
    bptr = &B;
    bptr->display();     // calls base class
    bptr->show();        // calls base class

    cout << "bptr points to derived class" << endl;
    bptr = &D;
    bptr->display();     // calls base class
    bptr->show();        // calls derived class

    return 0;
}