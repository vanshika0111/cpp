// program to find greates between 3 numbers by defining
// function inside the class

#include<iostream>
#include<stdlib.h> 
using namespace std;

class Greatest
{
    int x,y,z;

    public:
    // void final(int x, int y, int z)
    // {
    //     if(x>y)
    //     {
    //         (x>z) ? x : z;
    //     }
    //     else
    //     {
    //         (y>z) ? y : z;
    //     }

    // }

    void final(int x, int y, int z)
    {
        if (x>y)
        {
            if(x>z)
            {
                cout << "The greatest number is " << x << endl;

            }
            else
            {
                cout << "The greatest number is " << z << endl;
            }   
        }
        else
        {
            if (y>z)
            {
                cout << "The greatest number is " << y << endl;
            }
            else
            {
                cout << "The greatest number is " << z << endl;
            }
                    
        }
    }


};

// mian function
int main() 
{
    // object declaration
    Greatest obj1;

    // function call
    obj1.final(3,6,2);

    return 0;
}