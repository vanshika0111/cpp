// program to check if a given character is contained in a string or not & find it's position

#include<iostream>
#include<stdlib.h>
using namespace std;

// function protoype
int find_position (char s[], char c);

// main function
int main()
{
    char string[100], ch;
    int y=0;

    cout << "Enter a string: ";
    cin.getline(string,100);
    cout << endl;
    
    cout << "Enter a character to search: ";
    cin.get(ch);
    cout << endl;

    y = find_position (string, ch);
    if(y == -1)
    {
        cout << "Ooppss! Character isn't in the string." << endl;
    }

    return 0;
}

// function declaration
int find_position (char s[], char c)
{
    int flag = -1;
    for(int i=0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            flag = 0;
            cout << "The character is in the string at position " << i+1 << endl;
        }
    }
    return (flag);
}