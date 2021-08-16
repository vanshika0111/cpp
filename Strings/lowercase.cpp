// program to calculate lowercase character entered

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int char_count = 0;
    const char ent = '\n';
    char ch;
    cout << "Enter character: ";
    cin.get(ch);
    cout << endl;

    while(ch != ent)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            char_count++;
            cout.put(ch);
            
        }
        cin.get(ch);
    }

    cout << endl << "Number of characters = " << char_count << endl;

    return 0;
}