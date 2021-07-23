// design a class with all arithematic operations
// use them in main function

#include<iostream>
#include<stdlib.h>
using namespace std;

class Calculator
{
    private:
        float a,b;

    public:
        void get_value(void)
        {
            cout << "Enter value of first number: ";
            cin >> a;
            cout << endl << "Enter value of second number: ";
            cin >> b;
            cout << endl;
        }

        float add(void)
        {
            return a+b;
        }

        float sub(void)
        {
            return a-b;
        }

        float multiply(void)
        {
            return a*b;
        }

        float div(void)
        {
            if(b==0)
            {
                cout << "Error! Division by zero not possible." << endl;
            }
            else
            {
                return a/b;
            }
        }
};

int main()
{
    int choice;
    Calculator obj;   // object declaration

    cout << "**** CALCULATOR ****" << endl;
    cout << "Enter 1 for addition" << endl;
    cout << "Enter 2 for subtraction"  << endl;
    cout << "Enter 3 for multiplication" << endl;
    cout << "Enter 4 for division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    if (choice >= 1 && choice <=4)
    {
        switch (choice)
        {
            case 1:
                obj.get_value();
                cout << "Answer = " << obj.add() << endl;
                break;
            case 2:
                obj.get_value();
                cout << "Answer = " << obj.sub() << endl;
                break;
            case 3:
                obj.get_value();
                cout << "Answer = " << obj.multiply() << endl;
                break;
            case 4:
                obj.get_value();
                cout << "Answer = " << obj.div() << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    else
    {
        cout << "Please enter valid choice." << endl;
    }
    return 0;
}