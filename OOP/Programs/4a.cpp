// write a function that creates an array of user given size using new operator

#include<iostream>
#include<stdlib.h>
using namespace std;

class Array
{
    private:
        int *a, size;

    public:
        void create_array( int places)
        {
            size = places;
            a = new int[size];
        }

        void set_array()
        {
            cout<<"enter the elements of array: ";
            for(int i=0; i<size ;i++)
                cin>>*(a+i);
        }

        void display_array()
        {
            for(int i=0; i<size; i++)
                cout<<endl<<*(a+i);
        }
};

int main()
{
    Array a;

    a.create_array(5);
    a.set_array();
    a.display_array();
    
    return 0;
}

