#include<iostream>
#include<stdlib.h>
using namespace std;

const int obj = 3;

class Student
{
    private:
        char name[22];
        int age;

    public:
        void get_value(void);
        void display(void);
};

void Student :: get_value(void)
{
    cout << "Enter name of student: ";
    cin >> name;
    cout << endl << "Enter age of student: ";
    cin >> age;
    cout << endl;
}

void Student :: display(void)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

Student fy[obj];

int main()
{
    for(int i=0; i<obj; i++)
    {
        cout << "Student " << (i+1) << endl;
        fy[i].get_value();
    }

    cout << "** DISPLAYING DETAILS OF STUDENTS **" << endl;
    
    for(int i=0; i<obj; i++)
    {
        fy[i].display();
    }
    
    return 0;
}