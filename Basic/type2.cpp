// type conversion
// class type to built in

#include<iostream>
#include<stdlib.h>
using namespace std;

class Abc
{
    int hr,min;
    public:
    void data(int x, int y)
    {
        hr = x;
        min = y;
    }
    operator int()
    {
        return hr;
    }
};

int main()
{
    Abc obj;
    obj.data(1,60);
    int s;
        cout<<s<< endl;

    return 0;
}