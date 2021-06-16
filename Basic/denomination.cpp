#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int total;
    int r1_2000 = 0, r2_500 = 0, r3_100, r4_50 = 0, r5_20 = 0, r6_10 = 0, r7_5 = 0, r8_2 = 0, r9_1 = 0;
    int count = 0;
    cout<<"Total amount: ";
    cin>> total;
    cout<< endl;

    while(total >= 2000 )
    {
        r1_2000 = total/2000;
        total = total % 2000;
        cout<< "Notes of 2000 rs are: " << r1_2000 << endl;
        break;
    }

    while(total >= 500)
    {
        r2_500 = total/500;
        total = total % 500;
        cout<< "Notes of 500 rs are: " << r2_500 << endl;
        break;
    }

    while(total >= 100)
    {
        r3_100 = total/100;
        total = total % 100;
        cout<< "Notes of 100 rs are: " << r3_100 << endl;
        break;
    }

    while(total >= 50)
    {
        r4_50 = total/50;
        total = total % 50;
        cout<< "Notes of 50 rs are: " << r4_50 << endl;
        break;
    }

    while(total >= 20)
    {
        r5_20 = total/20;
        total = total % 20;
        cout<< "Notes of 20 rs are: " << r5_20 << endl;
        break;
    }

    while(total >= 10)
    {
        r6_10 = total/10;
        total = total % 10;
        cout<< "Notes of 10 rs are: " << r6_10 << endl;
        break;
    }

    while(total >= 5)
    {
        r7_5 = total/5;
        total = total % 5;
        cout<< "Notes of 5 rs are: " << r7_5 << endl;
        break;
    }

    while(total >= 2)
    {
        r8_2 = total/2;
        total = total % 2;
        cout<< "Notes of 2 rs are: " << r8_2 << endl;
        break;
    }

    while(total >= 1)
    {
        r9_1 = total/1;
        total = total % 1;
        cout<< "Notes of 1 rs are: " << r9_1 << endl;
        break;
    }

    cout<< "Total number of notes are: "<< r1_2000 + r2_500 + r3_100 + r4_50 + r5_20 + r6_10;

    
    return 0;
}