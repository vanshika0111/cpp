// program to show access to public, private (and protected) using inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

// base class
class Employee
{
    
    public:
    int id; 
    float salary;

    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    } 

    // default contructor to initialize variables
    Employee(){}
};

// // derived class: private
// class Programmer : private Employee
// {
//     public:
//     Programmer(int inpid)
//     {
//         id = inpid;
//     }
// 
//     int languageCode = 9;
// 
//     void getData()
//     {
//         cout << id << endl;
//     }
// };

// derived class: public
class Programmer : public Employee
{
    public:
    int languageCode;

    Programmer(int inpid)
    {
        id = inpid;
        languageCode = 9;
    }
        
    void getData()
    {
        cout << id << endl;
    }
};

// // main function for private derived class
// int main()
// {
//     Employee abc(1), xyz(2);
//     cout << abc.salary << endl;
//     cout << xyz.salary << endl;
//     Programmer skillF(1);
//     cout << skillF.languageCode << endl;
//     skillF.getData();
//     // cout << skillF.id << endl;
//     // the above line will give error as it is private
//     return 0;
// }

// main function for public derived class
int main()
{
    Employee abc(1), xyz(2);
    cout << abc.salary << endl;
    cout << xyz.salary << endl;
    Programmer skillF(1);
    cout << skillF.languageCode << endl;
    skillF.getData();
    cout << skillF.id << endl;
    // this will not give error as now id is public
    
    return 0;
}