/*
There are two methods to call function
    1. call by value
    2. call by reference

However, swap function will work with call by reference
as it consists of memory location
while call by value creates a copy of arguments. 
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

// functoin prototype
void swap_by_value(int, int);
void swap_by_reference(int &, int &);

// main function
int main()
{
    int a=7, b=4;
    cout << "ORIGINAL VALUES:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "CALL BY VALUE" << endl;
    swap_by_value (a,b);
    cout << "The values after swapping are: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "CALL BY REFERENCE" << endl;
    swap_by_reference(a,b);
    cout << "The values after swapping are: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

// CALL BY VALUE - SWAP FUNCTION
void swap_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Swapped values:" << endl;
    cout << "a = " << x << ", b = " << y << endl;
}

// CALL BY REFERENCE - SWAP FUNCTION
void swap_by_reference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Swapped values:" << endl;
    cout << "a = " << x << ", b = " << y << endl;
}