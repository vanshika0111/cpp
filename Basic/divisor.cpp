// program to generate divisors of an integres

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i,num;
    cout << "Enter an integer: ";
    cin >> num;

    for(i=1; i<=num/2; ++i)
    {
        if (num%i == 0)
        {
            cout << endl << i;
        }
    }
    return 0;
}
