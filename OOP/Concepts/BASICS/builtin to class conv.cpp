//type conversion
// built in to class type

#include<iostream>

using namespace std;

class Abc
{
    int hr,min;
    public:
   Abc()
    {}
    Abc(int t)
    {
        hr = t/60;
        min = t%60;
        cout << hr << endl << min << endl;
    }
};


int main()
{
    Abc obj;
    int duration = 90;
    obj = duration;

    return 0;
}