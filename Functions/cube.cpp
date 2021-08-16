// program to print cube of a given number using a function

#include<iostream>
#include<stdlib.h>
using namespace std;

// function prototype
int cube(int);

int main()
{
    int x,y;
    cout << "Enter anumber for cube: ";
    cin >> x;
    // function call
    y= cube(x);
    cout << "The cube of " << x << " is " << y << endl;
    return 0;
}

// function declaration
int cube(int a)
{
    int n;
    n = a*a*a;
    return (n);
}