// program to illustrate function overloading

// two or more functions having same name won't give any error
// compiler itslef checks the prototype, arguments and then returns the precise value
// this is termed as function overloading

#include<iostream>
#include<stdlib.h>
using namespace std;

int add(int x, int y)
{
    return x+y;
}

int add(int x, int y, int z)
{
    return x+y+z;
}

int main()
{
    cout<< "Sum of 1 and 2 is " << add(1,2) << endl;
    cout<< "Sum of 1,2,3 is " << add(1,2,3) << endl;

    return 0;
}