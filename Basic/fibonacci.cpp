// program to generate fibonacci series

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    unsigned long first, second, third, n;
    first = 0;
    second = 1;
    cout << "Enter number of elements (>5): ";
    cin >> n;
    cout << endl;

    cout << "FIBONACCI SERIES" << endl;
    cout << first << " " << second;

    for (int i =2; i<n; ++i)
    {
        third = first + second;
        cout << " " << third;
        first = second;
        second = third;
    }
    cout << endl;

    return 0;
}