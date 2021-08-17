// concept of this pointer

/*
Use of this pointer
    - keyword
    - points to the object which invokes the member function

*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class A
{
    int a;
    public:
        // void SetData(int a)
        A & SetData(int a)
        {
            // a = a;  --> takes garbage value
            this->a = a;
            return *this;
        }
        void GetData(void)
        {
            cout << "The value of a is " << a << endl;
        }
};

int main()
{
    A a;
    // a.SetData(2);
    // a.GetData();
    a.SetData(2).GetData();  //--> SetData returns object 
    return 0;
}