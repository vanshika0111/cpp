#include<iostream>
#include<stdlib.h>
using namespace std;

// function prototype
void F_C();
void C_F();

// global declaration
double temp, conv_temp;

// function to convert fahrenheit into celsius
void F_C()
{
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temp;
    cout<< endl;
    conv_temp = (temp -32)/1.8;
    cout << "Temperature in Celsius is " << conv_temp << endl;
}

// function to convert celsius into fahrenheit
void C_F()
{
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    cout<< endl;
    conv_temp = (1.8*temp) + 32;
    cout << "Temperature in Fahrenheit is " << conv_temp << endl;
}

// main function
int main()
{
    int choice;
    cout << "==== Temperature Conversion Menu ====" << endl;
    cout << "\t 1. Fahrenheit to Celsius" << endl;
    cout << "\t 2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    if (choice == 1)
    {
        F_C();
    }
    else
    {
        C_F();
    }

    return 0;
}