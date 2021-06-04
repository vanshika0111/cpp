#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int number, m1, m2, m3;
    cout<<"Enter a number: ";
    cin>>number;
    m1 = number*1;
    m2 = number*2;
    m3 = number*3;
    cout<<"First three multiples of given number are: ";
    cout<<m1 <<", " <<m2 <<" and " <<m3;
    return 0;
}