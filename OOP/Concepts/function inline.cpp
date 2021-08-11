#include<iostream>

using namespace std;

// the below function will apply for each addition compilation
// this copies the values for each return and occupies memory
int add(int x, int y)
{
    return x+y;
}

// the below fucntion will run only once for n number of addition commads
// inline function works during compilation
// it copies the return value to all the addition commands
// w/o copying the values at each stage and occupying memory
// inline int add(int x, int y)
// {
//     return x+y;
// }

// use inline function for small codes functions ONLY


int main()
{
    int x,y;
    cout<<"Enter the value of x and y: " << endl;
    cin>> x >> y;

    cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;
    // cout<<"The addition of x and y is: " << add(x,y) << endl;

    return 0;
}   