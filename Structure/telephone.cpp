// program - TELEPHONE DIRECTORY
/*
Program that can sort a list of names 7 TELEPHONE NUMBER ALPHABETICALLY. Names to be treated as a unit (Define them in a structure).
Persons are sorted alphabetically by their last names. 
Persons with the same last name are sorted by their first names.
*/

#include<iostream>
#include<string.h>
using namespace std;
const int size = 10;

struct Person
{
    char first_name[20];
    char last_name[20];
    long telephone;
} td[size],t;

void swap(Person &s1, Person &s2)
{
    strcpy(t.first_name, s1.first_name);
    strcpy(t.last_name, s1.last_name);
    t.telephone = s1.telephone;
    strcpy(s1.first_name, s2.first_name);
    strcpy(s1.last_name, s2.last_name);
    s1.telephone = s2.telephone;
    strcpy(s2.first_name, t.first_name);
    strcpy(s2.last_name, t.last_name);
}

int main()
{
    int i,j;
    for(i=0; i<size; ++i)
    {
        cout << "Person " << i+1 << ": " << endl;
        cin >> td[i].first_name >> td[i].last_name >> td[i].telephone;
    }

    // sorting of array alphabetically
    for(i=0; i<size; ++i)
    {
        for(j=0; j<size-1-i; ++j)
        {
            if( strcmp ( td[j].last_name, td[j+1].last_name ) > 0)
                swap(td[j], td[j+1]);
            else if ( strcmp ( td[j].last_name, td[j+1].last_name ) == 0)
            if(strcmp ( td[j].first_name, td[j+1].first_name ) > 0)
                swap(td[j], td[j+1]);
        }
    }

    for(i=0; i<size; ++i)
    {
        cout << "Person " << i+1 << endl;
        cout << td[i].last_name << " " << td[i].first_name << ", " << td[i].telephone << endl;
    }
    
    return 0;
}