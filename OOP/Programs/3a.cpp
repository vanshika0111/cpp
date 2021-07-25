// constructor to allocate memory dynamically and read value
// display() function to display the string
// destructor function to free allocated memory

#include<iostream>
#include<stdlib.h>
using namespace std;

class Dynamic
{
    public:
        Dynamic(int a)
        {
            int *number = new int;
            *number = a;
        }
        void display(int a)
        {
            cout << "Value= " << a<< endl;
        }
};
int main()
{
    // Dynamic obj;
    int x;
    cout << "Enter any number: ";
    cin >> x;
    cout << endl;
    Dynamic.display(x);
    return 0;
}