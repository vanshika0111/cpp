// program to find a substring of a given string

#include<iostream>
#include<string.h>
#include<process.h>
using namespace std;

int main()
{
    char mainstr[50], substr[50];
    int count, pos, i, j, len, num, x1;

    cout << "Enter main string: ";
    cin.getline(mainstr, 50);
    cout << endl;

    len = strlen(mainstr);
    cout << endl << "Enter starting position of substring: ";
    cin >> pos;
    cout << endl;

    if(pos>len)
    {
        cout << "Starting position exceeds the total length of the string!";
        exit(0);
    }

    cout << "The number of characters in substring? ";
    cin >> count;
    cout << endl;

    if(pos <= 0)
    {
        cout << "Extracted string is empty." << endl;
        exit(0);
    }
    else if(((pos + count) - 1) > len)
    {
        cout << "String to be extracted exceeds length." << endl;
        num = (len-pos);
    }
    else
    {
        num = count;
        cout << "Num " << num << endl;
    }

    j=0;
    for(i = -- pos; i<= (pos+num); ++i)
    {
        substr[j] = mainstr[i];
        j++;
    }

    cout << "Substring is " ;
    cout.write(substr,j) << endl;

    return 0;
}