// program to compute cosine series
/*
cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ... x^n/n!
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    float x,t,sum;
    int i, n=20;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << endl;

    x = x*3.1412/180;
    t = t+1;
    sum=1;

    for( i=1; i<=n; ++i)
    {
        t = t*pow((double) (-1), (double)(2*i-1)) * x * x/(2*i*(2*i-1));
        sum += t;
    }
    cout << "Cos(x) = " << sum << endl;

    return 0;
}