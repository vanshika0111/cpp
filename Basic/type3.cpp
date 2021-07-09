// type conversion
// class to class

#include<iostream>
#include<stdlib.h>
using namespace std;

class Item
{
    int m,n;
    public:
    void setm(int x)
    {m=x;}
    void setn(int y)
    {n=y;}
    void showdata()
    {cout << "m= " << m << " n= " << n << endl; }
};
class Product
{
    int a,b;
    pulic:
    void setdata(int x, int y)
    {a=x;b=y;}

    operator Item()
    {
        Item i1;
        i1.setm(a);
        i1.setn(b);
        return i1;

    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setdata(20,25);
    i1=p1;
    i1.showdata(20,25);

    
}