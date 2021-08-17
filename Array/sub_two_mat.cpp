// program to subtract two matrices

#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i,j,m,n,p,q;

    cout << "Enter number of rows for matrix A: ";
    cin >> m;
    cout << "Enter number of columns for matrix A: ";
    cin >> n;
    cout << "Enter number of rows for matrix B: ";
    cin >> p;
    cout << "Enter number of columns for matrix B: ";
    cin >> q;
    cout << endl;

    if((m==p) && (n==q))
    {
        cout << "Matrices can be subtracted." << endl;
    }
    else
    {
        cout << "Matrices cannot be subtracted." << endl;
        exit(0);
    }

    cout << "INPUT MATRIX A" << endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "INPUT MATRIX B" << endl;
    for(i=0; i<p; ++i)
    {
        for(j=0; j<q; ++j)
        {
            cin >> b[i][j];
        }
    }

    cout << "DISPLAYING MATRIX A" << endl;
    for(i=0; i<m; i++)
    {
        cout << endl;
        for(j=0; j<n; ++j)
        {
            cout << " " << a[i][j];
        }
    }

    cout << "DISPLAYING MATRIX B" << endl;
    for(i=0; i<p; ++i)
    {
        cout << endl;
        for(j=0; j<q; ++j)
        {
            cout << " " << b[i][j];
        }
    }

    cout << "PROCESSING SUBTRACTION OF MATRICES..." << endl;
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    cout << "DIFFERENCE OF TWO GIVEN MATRICES IS " << endl;
    for(i=0; i<m; ++i)
    {
        cout << endl;
        for(j=0; j<n; ++j)
        {
            cout << " " << c[i][j];
        }
    }

    return 0;
}