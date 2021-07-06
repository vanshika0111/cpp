// program ro check if a number is prime or not

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter number: ";
    cin >> num;
    cout << endl;

    for(i=2; i<=num/2; ++i)
    {
        if(num%i == 0)
        {
            cout << "Not a prime number." << endl;
            exit(0);
        }
    }
    cout << "Prime number" << endl;

    return 0;
}