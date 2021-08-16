// program to count number of spaces in a string

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    char str[80];
    int i, count=0;

    cout << "Enter a string (max 80 char): ";
    gets(str);

    for (i=0; str[i]!='\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << "Numbers of spaces in the given string are " << count << endl;

    return 0;
}