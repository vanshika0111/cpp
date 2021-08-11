

#include<iostream>
#include<stdlib.h>
using namespace std;

class Base
{
    private:
        int pvt = 1;
    protected:
        int prot = 2;
    public:
        int pub = 3;
        int getPVT(void)
        {
            return pvt;
        }
};

class PublicDerived : public Base
{
    public:
        int getPROT(void)
        {
            return prot;
        }
};

class ProtectedDerived : protected Base
{
    public:
        int getPROT(void)
        {
            return prot;
        }
        int getPUB(void)
        {
            return pub;
        }
};

class PrivateDerived : private Base
{
    public:
        int getPROT(void)
        {
            return prot;
        }
        int getPUB(void)
        {
            return pub;
        }
};

int main()
{
    PublicDerived object1;
    ProtectedDerived object2;
    PrivateDerived object3;

    cout << "** Public Specifier **" << endl;
    cout << "Private = " << object1.getPVT() << endl;     
    cout << "Protected = " << object1.getPROT() << endl;
    cout << "Public = " << object1.pub << endl;

    cout << "** Protected Specifier **" << endl;
    cout << "Private cannot be accessed."<< endl;
    // cout << "Private = " << object2.getPVT() << endl;   -> gives an inaccessible error
    cout << "Protected = " << object2.getPROT() << endl;
    cout << "Public = " << object2.getPUB() << endl;

    cout << "** Private Specifier **" << endl;
    cout << "Private cannot be accessed."<< endl;
    // cout << "Private = " << object3.getPVT() << endl;   -> gives an inaccessible error
    cout << "Protected = " << object3.getPROT() << endl;
    cout << "Public = " << object3.getPUB() << endl;

    return 0;
}