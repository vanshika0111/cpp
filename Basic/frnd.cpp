#include<iostream>
#include<stdlib.h>
using namespace std;
class Box
{
    int length;
    public:
    Box()
    {
        length=3;
    }
    friend int printLength(Box);
};

int printLength(Box b)
{
    b.length +=10;     // case 1
    //b.length = 10;      // case 2
    return b.length;
}

int main()
{
    Box b;
    cout<< "Length of box: " << printLength(b) << endl;
    // first control gies into constructor and a=3
    // since its friend constructor, it will go under control of friend
    // case 1:
    // now it goes to printLength function where a = a+10= 3+10 = 13
    // thus, the output is 13
    // no matter what, if friend const is there it will chagne its the original value of variable
    // case 2:
    // since there's no operation on variable thus, a = 10

    return 0;
}