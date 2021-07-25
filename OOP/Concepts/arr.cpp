// array of objects 

#include<iostream>
#include<stdlib.h>
using namespace std;

class Employee
{
    private:
        int id;
        int salary;
    public:
        void setID(void)
        {
            salary=120;
            cout << "Enter ID: ";
            cin >> id;
            cout << endl;
        }

        void getID(void)
        {
            cout << "The id is " << id << endl;
        }
};

int main()
{
    // Employee one,two,three;    |\                                
    //                            | \
    // one.setID();               |  \
    // one.getID();               |   \
    // two.setID();               |   /---> this will work for few objects. But what if database if larger?
    // two.getID();               |  /
    // three.setID();             | /
    // three.getID();             |/

    Employee obj[4];     // array of objects
    for(int i=0; i<4; i++)
    {
        obj[i].setID();
        obj[i].getID();
    }

    return 0;
}