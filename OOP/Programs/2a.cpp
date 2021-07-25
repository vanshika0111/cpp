// write a program to find the largest of three integers using swap function
// function accepts integer arguments by reference

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int number1, number2, number3;
    
    cout << "Enter three numbers: " << endl;
    cin >> number1 >> number2 >> number3 ;
    cout << endl;

    max(number1, number2, number3);

    return 0;
}


// finding max
void max(int *a, int *b, int *c)
{
    int largest = *a;
    if (*b > largest )
    {
        largest = *b;
        cout << largest << " is maximum." << endl;
    }
    else if (*c > largest)
    {
        largest = *c;
        cout << largest << " is maximum." << endl;
    }
    else
    {
        cout << largest << " is maximum." << endl;
    }
}