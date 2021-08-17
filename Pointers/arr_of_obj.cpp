#include<iostream>
#include<stdlib.h>
using namespace std;

class Shop
{
    int id;
    float price;

    public:
        void SetData(int a, float b)
        {
            id = a;
            price = b;
        }

        void GetData(void)
        {
            cout << "Code of this item is " << id << endl
                << "Price for this item is " << price << endl;
        }
};

int main()
{
    int size = 2;
    // int *ptr = &size;
    // int *ptr = new int [40];
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p;
    float q;

    for(int i = 0; i<size; i++)
    {
        cout << "Enter ID of item " << i+1 <<": ";
        cin >> p;
        cout << endl << "Enter price of item " << i+1 <<": ";
        cin >> q;
        cout << endl;

        (*ptr).SetData(p,q);
        ptr++;
    }

    for(int i=0; i<size; i++)
    {
        cout << "Item number: " << i+1 << ": " << endl;
        ptrTemp->GetData();
        ptrTemp++; 
    }

    return 0;
}