// program to illustrate the call by value method of function invoking

/*
What is Call by Value?
    - In this method, it copies the value of actual parameters into the formal parameters
      i.e., the function creates its own copy of argument values & then uses them.
    - The changes are not reflected back to the original values
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

// function prototype
int change(int);

int main()
{
    int original = 10;

    cout << "The original value is " << original << endl;
    cout << "Return value is " << change(original) << endl;
    cout << "The value after function working is " << original << endl;

    return 0;
}

// function declaration
int change(int a)
{
    a = 20;
    return a;
}

/*
Note that second cout statement will give 20 
but third statement will give 10 as the value is not changed at memory location
*/