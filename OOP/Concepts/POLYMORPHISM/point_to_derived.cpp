#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base;
        void display(void)
        {
            cout << "Displaying base class variable" << var_base << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derive;
        void display(void)
        {
            cout << "Displaying base class variable" << var_base << endl;
            cout << "Displaying derived class variable" << var_derive << endl;
        }
};

int main()
{
    // CASE 1
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derive;
    base_class_pointer = &obj_derive;

    base_class_pointer->var_base = 34;  // --> valid
    // base_class_pointer->var_derive = 140;  throws an error as var_derive isn;t membe of base class
    base_class_pointer->display();  // --> will print base class;s display not derived class as pointer is of base class
    base_class_pointer->var_base = 40; 
    base_class_pointer->display();

    // CASE 2
    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derive;
    derived_class_pointer->var_derive = 100;
    derived_class_pointer->display();

    return 0;

}