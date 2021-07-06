// program to print first n natural numbers and giev their sum 

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i, sum, n;
    cout << "How many natural numbers? ";
    cin >> n;
    cout << endl; 

    for (i=1, sum=0; i<=n; ++i)
    {
        cout << "\n" << i;
        sum += i;
    }
    cout << "\n" << "The sum of first " << n << " natural numbers is " << sum << endl;


    return 0;
}