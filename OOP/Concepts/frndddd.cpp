// friend function

#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
    private:
        int a;
        int b;

    public:
        void SetData(int v1, int v2)
        {
            a=v1;
            b=v2;
        }
        void display(void)
        {
            cout << "Complex number = " << a << " + " << b << "i" <<endl;
        }
        friend Complex Sum(Complex o1, Complex o2);
};

/*
if friend function isn't declared
function Sum will throw an error
as it tries to access the private members of class Complex
thus, to access them, declare a friend function.
*/

/*
Friend function allows the non-member function (Sum here)
to use the/access the private members
*/

/*
Properties of friend function:
1. Not in the scope of class
2. since not i the scope of class, it cannot be called from the object of that class
   --> c1.Sum()  --> invalid/ throws an error
3. can be invoked w/o the help of object
4. usually contains objects as arguments
5. can be dclared in private or public section of the class
6. cannot access the members directly by theur names  & need to access any member
  --> objectName.memberName --> invalid
*/
Complex Sum(Complex o1, Complex o2)
{
    Complex o3;
    // cout << a; --> invalid (Check property 6)
    o3.SetData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    // object declaration
    Complex c1,c2; 
    Complex sum;

    c1.SetData(1,4);
    c1.display();

    c2.SetData(3,6);
    c2.display();

    sum = Sum(c1,c2);
    sum.display();

    return 0;
}