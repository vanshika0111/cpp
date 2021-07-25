// constructor with default arguments

#include<iostream>
#include<stdlib.h>
using namespace std;

class Simple
{
    private:
        int data1, data2;
        
    public:
        Simple(int a, int b=3)
        {
            data1 = a;
            data2 = b;
        }

        void display(void);
};

void Simple :: display(void)
{
    cout << "The value of data is " << data1 << " & " << data2 << endl;
} 

int main()
{
    Simple s(4,6);
    // gives (4,6) as output
    s.display();

    Simple s2(1);
    // gives (1,3) as output
    s2.display();

    return 0;
}