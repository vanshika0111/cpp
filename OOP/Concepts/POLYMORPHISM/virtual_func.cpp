// virtual function

#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base=1;
        virtual void display(void)
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
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derive;
    base_class_pointer = &obj_derive;