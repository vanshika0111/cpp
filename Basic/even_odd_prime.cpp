// program to check if a given number is odd or even or prime.
// program will continue as long as user wants

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    char choice;
    int num,i;

    do
    {
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;

        if (num%2 == 0)
        {
            cout << "Even number" << endl;
        }
        else
        {
            cout << "Odd number" << endl;
        }
        if (num == 1)
        {
            cout << "Prime number" << endl;
        }
        else
        {
            for (i=2; i<=num/2; ++i)
            {
                if (num%i == 0)
                {
                    cout << "Not a prime number" << endl;
                    goto lb;
                }
            }
            cout << "Prime" << endl;
        }
        lb:
        cout << "Do you want to continue? (y/n)";
        cin >> choice;
        cout << endl;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}