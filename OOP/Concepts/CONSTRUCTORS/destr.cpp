// destructor

/*
it frees the memory allocated dynamically.
neither takes an argument nor returns any value
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

//global declaration
int count=0;

class Number
{
    public:
        Number()
        {
            count++;
            cout << "Constructor is called for object number " << count << endl;
        }

        ~Number()
        {
            cout << "Destructor is called for object number " << count << endl;
            count--;
        }
};

int main()
{
    cout << "Inside main function" << endl;
    cout << "Creating first object n1" << endl;
    Number n1;
    {
        // as soon as block is exited, everything of this block vanishes
        cout << "Entering this block." << endl;
        cout << "Creating two more objects " << endl;
        Number n2, n3;
        cout << "Exiting this block." << endl;
        // destructor will be called for obj n2 & n3 as the block is exited
    } 
    cout << "Back to main function." << endl;
    // now destructor for obj n1

    return 0;
}