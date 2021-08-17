// program to illustrate different constructors

#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
    public :
    int a=10;
    A()
    {
        a=369;
    }
    A(int a)
    {
        cout<< "Value of a is : " << a << endl;
    }
    void show()
    {
        cout<< "Value of a is : " << a << endl;
    }
};

int main()
{
    //A obj(23);  // gives 23 as output
    A obj;       // gives 369 as output
    obj.show();  // gives 10 as output
    //A obj();  // throws an error
    //A obj;    // throws an error
    return 0;
}