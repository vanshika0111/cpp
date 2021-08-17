// program to convert distance in feet or inches using a call by reference method

#include<iostream>
#include<stdlib.h>
using namespace std;

// function prototype
void convert(float &, char &, char);

// main function
int main()
{
    float distance;
    char choice, type = 'F';

    cout << "Enter distance in feet: ";
    cin >> distance;
    cout << endl;

    cout << "Convert distance into feet or inches? (F/I): ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        case 'F': convert(distance, type, 'F');
            break;
        case 'I': convert(distance, type, 'I');
            break;
        default: cout << "Invalid choice!" << endl;
            exit(0);
    }

    cout << "Distance = " << distance << " " << type << endl;

    return 0;
}

void convert(float & d, char & t, char ch)
{
    switch(ch)
    {
        case 'F': if(t=='I')
            {
                d = d/12;
                t = 'F';
            }
            break;
        case 'I': if(t== 'F')
            {
                d = d*12;
                t = 'I';
            }
            break;
    }
    return ;
}