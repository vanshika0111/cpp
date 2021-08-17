// static data members and methods

#include<iostream>
#include<stdlib.h>
using namespace std;

class Employee
{ 
    private:
        int id;
        static int count;
        // static int count=100;  --> this is a syntax error

    public:
        void setdata(void) 
        { 
            cout << "Enter ID of employee: ";
            cin >> id;
            count++;
            cout  << endl;
        }

        void getdata(void) 
        { 
            cout << "The ID of employee is "<< id; 
            cout << " and this is employee number " << count << endl;
        }

        static void getCount(void)
        {
            // cout << id;  --> inacessible as it is non-static
            cout << "The value of count is " << count << endl;
        }
};

//  ***** static variable ******
int Employee :: count;
// this declared static
// it occupies memory only once
// no matter how many times it is called
// be default, it initialises with zero only
// thus, no need to initialize it with zero
// initialize iff the vaue isn't zero
// the visibilty and scope of static is within the class
// it terminates as the program is closed
// static int count=100;   // --> this won't give any error
// if value is to be initialized,
// set the value outside the class

// **** static function ****
// static functions have access to only static variables
// syntax for calling static function: 
// ClassName :: StaticFunctionName();

int main()
{
    Employee one, two, three;

    // one.id = 1;     --> cannot execute as it is private
    // one.count = 1;  --> cannot execute as it is private

    one.setdata();
    one.getdata();
    Employee :: getCount();

    two.setdata();
    two.getdata();
    Employee :: getCount();

    three.setdata();
    three.getdata();
    Employee :: getCount();

    return 0;
}