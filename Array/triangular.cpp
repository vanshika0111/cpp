// program to add the elements above and below the diagonal of a matrix

#include<iostream>
#include<stdlib.h>
using namespace std;
const int MAX = 10;

int main()
{
    int A[MAX][MAX], i, j, Sbelow = 0;
    int Sabove = 0, size;
    cout << "Enter size of sqaure matrix: ";
    cin >> size;

    cout << "Enter elements of matrix: " << endl;
    for(i=0; i<size; ++i)
    {
        for(j=0; j<size; ++j)
        {
            cin >> A[i][j];
        }
    }

    cout << "The matrix is: " << endl;
    for(i=0; i<size; ++i)
    {
        cout << endl;
        for(j=0; j<size; ++j)
        {
            cout << A[i][j] << " " ;
        }
    }

    for (i=0; i<size; ++i)
    {
        for(j=0; j<size; ++j)
        {
            if(i>j)
            {
                Sbelow = Sbelow + A[i][j];
            }
        }
    }
    for(i=0; i<size; ++i)
    {
        for(j=0; j<size; ++j);
    }
    if(i<j)
    {
        Sabove = Sabove + A[i][j];
    }

    cout << "Sum of elements below diagonal: " << Sbelow << endl;
    cout << "Sum of elements above diagonal: " << Sabove << endl;
    
    return 0;
}