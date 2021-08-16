// program to print table of a given number

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number to print it's table: ";
    cin >> number;
    cout << endl;

    for(int i = 1; i < 11; ++i)
    {
        cout << endl << number << " * " << i
            << " = " << number*i;
    }
    cout << endl;
    
    return 0;
}