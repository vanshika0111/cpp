#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int A[3][3], B[3][3], r, c;


    //input for first matrix
    cout<<"Enter first matrix row-wise\n";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            cin>>A[r][c];
        }
    }

    //inout for second matrix
    cout<<"Enter second matrix row-wise\n";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            cin>>B[r][c];
        }
    }

    // displays the first matrix 
    cout<<"\n the first matrix is :\n"<< endl;
    for(r=0;r<3;r++)
	{
 	 cout<<"\n";
 	 for(c=0;c<3;c++)
      {
  	    cout<<A[r][c];
      }
	}

    // displays the second matrix 
    cout<<"\n the second matrix is :\n"<< endl;
    for(r=0;r<3;r++)
	{
 	 cout<<"\n";
 	 for(c=0;c<3;c++)
      {
  	    cout<<B[r][c];
      }
	}
    
    cout<<endl;

    //loop for equality
    int flag=0;
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            if (A[r][c] != B[r][c])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag != 0)
    {
        cout<<"Matrices are unequal!";
    }
    else
    {
        cout<<"Matrices are equal.";
    }

    return 0;
}
