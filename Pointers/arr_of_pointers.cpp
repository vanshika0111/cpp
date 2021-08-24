// array of pointers

#include<iostream>
#include<string.h>
#include<conio.h>
#include<ctype.h>

using namespace std;

int main()
{
    int i=0;
    char *ptr[10] = { "books", "television", "computer", "sports"};
    char str[30];

    cout << "Enter your favorite hobby: ";
    cin >> str;
    cout << endl;
    for(i=0; i<4; i++)
    {
        if( !strcmp (str, *ptr[i] ) )
        {
            cout << "Your hobby " << str << " is available here." << endl;
            break;
        }
        if(i==4)
        {
            cout << "Your hobby " << str << " is not available here." << endl;
        }
    }

    return 0;
}