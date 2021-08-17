// program to read a string and convert it to uppercase

#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
    char str[25];
    int flag = 1;
    int i;

    cout << "Enter a string: ";
    cin.getline(str,25);
    cout << endl;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(isupper (str[i]))
        {
            flag = 0;
            cout << str[i] << " is already in uppercase." << endl;
        }
        else if(islower(str[i]))
        {
            flag = 1;
            str[i] = toupper(str[i]);
        }
    }

    if((flag == 1) || (str[i] == '\0'))
    {
        cout << "Uppercase string is: " ;
        int x1 = strlen(str);
        cout.write(str,x1);
    }

    return 0;
}