// objects memory allocations using arrays

#include <iostream>
#include <stdlib.h>
using namespace std;

class Shop
{
private:
    int ItemID[100];
    int ItemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: setPrice(void)
{
    cout << "Enter ID of your item number " << counter + 1 << ":";
    cin >> ItemID[counter];
    cout << "Enter price of your item: ";
    cin >> ItemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID is " << ItemID[i] << " is " << ItemPrice[i] << endl;
    }
}

int main()
{
    // object declaration
    Shop obj;

    // function call
    obj.initCounter();
    obj.setPrice();
    obj.setPrice();
    obj.setPrice();
    obj.displayPrice();

    return 0;
}