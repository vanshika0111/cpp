// program to find the largest element of an array given by the user

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    float large(float arr[], int n);

    char ch;
    int i;
    float amount[50], big;

    for(i=0; i<50; i++)
    {
        cout << "Enter element number " << i+1 << ": ";
        cin >> amount[i];
        cout << endl << "Want to enter more? (y/n): " ;
        cin >> ch;
        if(ch != 'y')
        {
            break;
        }
    }

    if (i< 50)
    {
        i++;
    }

    big = large(amount, i);
    cout << "The largest element of the array is " << big << endl;

    return 0;
}

float large(float arr[], int n)
{
    float max = arr[0];
    for (int j=1; j<n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    return (max);
}
