// program to calculate transpose of a matric

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a[10][10], b[10][10];
    int i,j,m,n;

    cout << "Enter number of rows for matrix A: ";
    cin >> m;
    cout << "Enter number of columns for matrix A: ";
    cin >> n;

    cout << "INPUT MATRIX A" << endl;
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            cin >> a[i][j];
        }
    }

    cout << "DISPLAYING MATRIX A" << endl;
    for(i=0; i<m; ++i)
    {
        cout << endl;
        for(j=0; j<m; ++j)
        {
            cout << " " << a[i][j] ;
        }
    }

    cout << "PROCESSING TRANSPOSE OF MATRIX A[m][n]" << endl;
    for(i=0; i<n; ++i)
    {
        for(j=0; j<m; ++j)
        {
            b[i][j] = a[i][j];
        }
    }
    
    cout << "TRANSPOSE OF MATRIX IS: " << endl;
    for(i=0; i<n; ++i)
    {
        for(j=0; j<m; ++j)
        {
            cout << " " << b[i][j];
        }
        cout << endl;
    }


    return 0;
}