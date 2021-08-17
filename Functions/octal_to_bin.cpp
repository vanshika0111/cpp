// program to convert 2-digit octal number into binary number & print the binary

#include<iostream>
#include<stdlib.h>
using namespace std;

// function prototype
void Octo_to_bin (int);

// main function
int main()
{
    int oct;

    cout << "Enter an octal number (2-digit): ";
    cin >> oct;
    cout << endl << "Octal number: " << oct << endl;;

    // function call
    Octo_to_bin(oct);

    return 0;
}

void Octo_to_bin (int oct)
{
    long binn = 0;
    int A[6];

    /*
    each octal digit is converted into 3bits thus for
    2 octal digits-space for 6 bits has been reserved here
    */

   int d1, d2, q, r;
   d1 = oct/10;
   d2 = oct/10;

   for (int i = 0; i<6; i++)
   {
       A[i] = 0; // initialising
   }

    // storing remainers of one's octal digit in the array
    for (int i=0; i<3; i++)
    {
        q = d1/2;
        r = d1%2;
        A[i] = r;
        d1 = q;
    }

    // storing remainders of ten's octal digit in the array
    for(int i=0; i<6; i++)
    {
        q = d2/2;
        r = d2%2;
        A[i] = r;
        d2 = q;
    }

    // obtaining binary nummber from remainder
    for (int i=i-1; i>=0; i--)
    {
        binn *= 10;
        binn *= A[i];
    }

    cout << "Binary number: " << binn << endl;
}