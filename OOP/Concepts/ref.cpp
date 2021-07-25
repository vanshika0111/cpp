// swap fucntion
// use of reference
// friend function

#include<iostream>
#include<stdlib.h>
using namespace std;

// forward declaration
class c2;

class c1
{
    int value1;
    friend void exchange(c1 &, c2 &);

    public:
        void InData(int a)
        {
            value1 = a;
        }

        void Display(void)
        {
            cout << value1 << endl;
        }
};

class c2
{
    private:
        int value2;
        friend void exchange(c1 &, c2 &);

    public:
        void InData(int a)
        {
            value2 = a;
        }
        void Display(void)
        {
            cout << value2 << endl;
        }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.InData(34);
    oc2.InData(62);

    cout << "The value of c1 before exchanging: ";
    oc1.Display();

    cout << "The value of c2 before exchanging: ";
    oc2.Display();
    
    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging: " ;
    oc1.Display();

    cout << "The value of c2 after exchanging: " ;
    oc2.Display();
    return 0;
}