// pointers to objects

#include<iostream>
#include<stdlib.h>
using namespace std;

class Item
{
    int code;
    float price;

    public:
        void GetData(int a, int b)
        {
            code = a;
            price = b;
        }
        void show(void)
        {
            cout << "Code = " << code << endl 
                << "Price = Rs. " << price << endl;
        }
};

const int size = 2;

int main()
{
    Item *p = new Item[size];
    Item *d = p;
    int x,i;
    float y;

    for(i=0; i<size; i++)
    {
        cout << "Enter code: ";
        cin >> x;
        cout << endl << "Enter price: ";
        cin >> y;
        cout << endl;

        p->GetData(x,y);
        p++;
    }

    for(i=0; i<size; i++)
    {
        cout << "Item " << i+1 << endl;
        d->show();
        d++;
    }

    return 0;
}