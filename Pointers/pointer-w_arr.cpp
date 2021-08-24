// pointers with array

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int numbers[50], *ptr;
    int n,i;
    cout << "Enter count: ";
    cin >> n;
    cout << endl << "Enter numbers one by one: " << endl;
    for(i=0; i<n; i++)
    {
        cin >> numbers[i];
    }
    ptr = numbers;
    int sum=0;
    for(i=0; i<n; i++)
    {
        if(*ptr%2 == 0)
        {
            sum = sum + *ptr;
        }
        ptr++;
    }
    cout << "Sum of even numbers: " << sum;
    return 0;
}