// program of static data and function member 

#include<iostream>

using namespace std;

class A{
    int a;
    static int b;
    public:
    A(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<endl<<b<<endl;
    }
    static void display()
    {
        cout<<" "<<b<<endl;
    }
};
int A::b=0;
int main()
{
    A obj(3,6),obj2(9,10);
    // CASE 1. (3,6) will give a=3 and b=6
    // CASE 2. (9,10) will give a=9, b=10
    // here a is general variable but b is static variable
    // in case 1, b=6 but in case 2, b=10
    // that means, now for case 1 also b=10
    obj.show();   // this will give a=3 and b=10
    obj2.show();  // this will give a=9 and b=10
    A::display(); // display function is used to give b's value i.e., 10
    obj.show();   // again case 1 i.e., a=3 and b=10
    
}