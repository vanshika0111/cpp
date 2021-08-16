// program to find if a given year is a leap year

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int year;
    cout << "Enter year (4-digit): ";
    cin >> year;
    cout << endl;

    if(year%100 == 0)
    {
        if(year%400 == 0)
        {
            cout << "Leap year" << endl;
        }
    }
    else if (year%4 == 0)
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }

    return 0;
}