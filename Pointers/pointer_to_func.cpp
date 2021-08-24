// pointers to functions

#include<iostream>
#include<stdlib.h>
using namespace std;

typedef void (*FunPtr)(int, int);

void add(int i, int j)
{
    cout << i << " + " << j << " = " << i+j << endl;
}

void subtract(int i, int j)
{
    cout << i << " - " << j << " = " << i-j << endl;
}

int main()
{
    FunPtr ptr;
    ptr = &add;
    ptr(1,2);
    cout << endl;
    ptr = &subtract;
    ptr(3,2);

    return 0;
}