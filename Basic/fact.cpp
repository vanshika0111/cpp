// program to calculate factorial of an integer

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i, num, fact=1;
    cout << "Enter an integer: ";
    cin >> num;
    cout << endl;

    i=num;
    while(num)
    {
        fact *= num;
        --num;
    }
    cout << "The factorial of " << i << " is " << fact << endl;

    return 0;
}