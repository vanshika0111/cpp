// call by reference

/*
What is call by reference?
    It is the method where the original values are passed as arguments.
    The formal parameters become references (or alias) to the actual parameters in the calling function.
    Any changes in the calling function will reflect to the original data.
*/

/*
There are two tyoes of call by reference:
    1. call by address
    2. call by reference
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    void change(int &);
    int original = 10;
    cout << "The original value is " << original << endl;
    change(original);
    cout << "Value after calling the function is " << original << endl;

    return 0;
}

void change(int & a)
{
    a = 20;
    cout << "The value in function is " << a << endl;
    return ;
}