// program to create a student class, read 
// and print 3 student's details (Name, Number, total marks)

#include<iostream>
#include<stdlib.h>
using namespace std;

const int Obj=3;
// const int size=3;

class Student 
{
    int roll_number;
    char name[21];
    // float marks[size];
    float marks;

    public:
    void get_value(void)
    {
        char ch;
        cout << "Enter details:" << endl;
        cout << "Roll number: " ;
        cin >> roll_number;
        cin.get(ch);
        // cout << endl;
        cout << "\n" << "Name: " ;
        cin.getline(name,21);
        // cout << endl;
        cout << "\n" << "Total marks: ";
        cin >> marks;
        cout << endl;
    }
    void display(void);
};

void Student :: display(void)
{
    cout << endl;
    cout << "Roll number: " << roll_number << endl;
    cout << "Name: " << name << endl;
    cout << "Total marks: " << marks << endl;
}

Student fy[Obj];

int main()
{
    // int i=0;
    // dispalying infromation for three students
    for(int i=0; i<Obj; i++)
    {
        cout << "Student " << (i+1) << endl;
        fy[i].get_value();
    }

    for(int i=0; i<Obj; i++)
    {
        fy[i].display();
    }

    return 0;
}