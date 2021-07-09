#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x;
    float y=3.69;
    x=y;
    cout<< x << endl << y;

    // since x=y and x is an int while y is float
    // the int part of y will be assigned to x
    // and y will be assigned the floating-point number
    
    return 0;
}