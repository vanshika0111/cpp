// program to search for a specific element in a 1-D array (Linear Search)

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int A[20], size, i, flag=0, num, pos;

    cout << "Enter the number of elements of the array: ";
    cin >> size;
    cout << endl << "Enter elements of array (in ascending order): " ;
    for(i=0; i<size; i++)
    {
        cin >> A[i];
    }  
    cout << "Enter an element to search: ";
    cin >> num;
    cout << endl;

    for(i=0; i<size; i++)
    {
        if (A[i] == num)
        {
            flag = 1;
            pos = i;
            break;
        }
    }
    if (flag == 0)
        {
            cout << "Element not found." << endl;
        }
    else
        {
            cout << "Element found at position " << (pos+1) << endl;
        }
    
    return 0;
}