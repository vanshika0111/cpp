// if all the classes have same function name then it gives a ambiguity

/*
TYPE ONE
    When functions have same in inheritance
    i.e., base class & derived class have same method's name
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Base1
{
    public:
        void greet(void)
        {
            cout << "Hello." << endl;
        }
};

class Base2
{
    public:
        void greet(void)
        {
            cout << "How are you?" << endl;   
        }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
        void greet(void)
        {
            Base1 :: greet();
            // Base2 :: greet();   
            // try to run both bases
            /*
            If this function is not defined, dobj.greet() will throw an error
            of "greet is ambiguos" as there are two classes which have greet() function.
            */
        }
};

// ambiguity type one
// int main()
// {
//     Base1 b1obj;
//     Base2 b2obj;
//     Derived dobj;
//     b1obj.greet();
//     b2obj.greet();
//     dobj.greet();
//     return 0;
// }

/*
TYPE TWO
    When override is performed
*/
class B
{
    public:
        void say(void)
        {
            cout << "hiiiii" << endl;
        }
};

class D : public B
// class D
{
    // public:
    //     void say(void)
    //     {
    //         cout << "bye" << endl;
    //     }
    // D's say() will override B's say() method
};

// ambiguity type two
int main()
{
    B obj1;
    D obj2;
    obj1.say();
    obj2.say();
    return 0;
}