#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << endl;

    if( ( (ch >= 'A') && (ch <= 'Z') ) || ( (ch >= 'a') && (ch <= 'z') ) )
    {
        //cout << "Its an alphabet" << endl;
        if ( ch >= 65 && ch <= 90)
        {
            cout << "Its an uppercase alphabet." << endl;
        }
        if ( ch >= 97 && ch <= 122)
        {
            cout << "Its a lowercase alphabet." << endl;
        }
    }
    else
    {
        if ( ch >= '0' && ch <= '9')
        {
            cout << "Its a digit" << endl;
        }
        else
        {
            cout << "Its a special character" << endl;
        }
    }

    return 0;
}