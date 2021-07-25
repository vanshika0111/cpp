// constructor to allocate memory dynamically and read value
// display() function to display the string
// destructor function to free allocated memory

#include<iostream>
#include<stdlib.h>
using namespace std;


class Dynamic
{
    private:
        char arr[10];
    public:
        Dynamic(char i)  // constructor
        {
            arr[10]=i;
            cout << "Constructing objcet with " << i << endl;
        }
        ~Dynamic()
        {
            cout << "Destroying object having " << arr[10] << endl;
        }
        void put_x(char i)
        {
             arr[10]= i; 
        }
        char get_x(void)
        { 
            return arr[10]; 
        }
};

void afunc(Dynamic d1)
{
    d1.put_x(2);
    cout << "This is x local to afunc()" << endl;
    cout << "x= " << d1.get_x() << endl;
}

int main()
{
    Dynamic d(1);
    cout << "This is x in main()" << endl;
    cout << "x= " << d.get_x() << endl;
    afunc(d);  // pass object d by value to afunc  
    cout << "Back in main" << endl;
    cout << "x= " << d.get_x() << endl;
   
    
    return 0;
}