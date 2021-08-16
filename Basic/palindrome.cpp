// program to check whether a number is plaindrome or not

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n, num, digit, rev=0;
    cout << "Enter a number: " ;
    cin >> num;
    cout << endl;

    n = num;

    do
    {
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    } while (num != 0);

    cout << "Reverse of the number: " << rev << endl;

    if(n==rev)
        cout << "The number is plaindrome." << endl;
    else
        cout << "The number is not a plaindrome." << endl;

    return 0;
}