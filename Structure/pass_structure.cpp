// program to pass structures to function through call by value & call by reference

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Emo
{
    int EmpNo;
    char name[10];
    double salary;
};

void ReadEmp(Emp & e)
{
    cout << "Enter employee number: ";
    cin >> e.EmpNo;
    cout << endl << "Enter employee name: ";
    cin >> e.name;
    cout << "Enter employee salary: ";
    cin >> e.salary;
    cout << endl;
}

void ShowEmp (Emp e)
{
    cout << "DISPLAYING EMPLOYEE DETAILS" <<  endl;
    cout << "Empployee number: " << e.EmpNo << endl
        << Name: 
}

int main()
{

    return 0;
}