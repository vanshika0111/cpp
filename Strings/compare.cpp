// program to compare length of two strings

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    char string1[50], string2[50];

    cout <<"Enter first string: ";
    cin.getline(string1,50);
    cout <<"Enter second string: ";
    cin.getline(string2,50);

    int i,j;
    for(i=0; string1[i] != '\0' ; i++);
    
    for(j=0; string2[j] != '\0'; j++);
        
    if(i==j)
    {
        cout << "Both strings have equal number of characters." << endl;
    }
    else
    {
        cout << "Both strings have different number of strings." << endl;
    }
        



    return 0;
}