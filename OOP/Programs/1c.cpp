// create a string class that includes all the string related functions 
// functions: length, copy, compare, concatenation, sub string search
// without using in-built string function

#include<iostream>
#include<stdlib.h>
using namespace std;

class String
{
    private:
        char name1[30] = "hello";
        char name2[30] = "bye";
        int length1=0;   // display_length
        int length2=0;   // display_length
        char final[30]; // concate
    public:
        // void get_string(void);
        void display_string(void);
        void display_length(void);
        void copy(void);
        void compare (void);
        void concate();
};

// void String :: get_string(void)
// {
//     cout << "Enter a string: " ;
//     cin >> name1;
//     cout << endl << "Enter second string" ;
//     cin >> name2;
//     cout << endl;
// }

void String :: display_string(void)
{
    cout << "First string is " << name1 << endl;
    cout << "Second string is " << name2 << endl;
    
}


void String :: display_length(void)
{
    while(name1[length1] != '\0')
    {
        ++length1;   
    } 
    cout << "The length of first string is " << length1 << endl;

    while(name2[length2] != '\0')
    {
        ++length2;   
    } 
    
    cout << "The length of second string is " << length2 << endl;
}

void String :: copy(void)
{
    int i=0;
    for(i; name1[i] != '\0'; i++)
    {
        name2[i] = name1[i];
        // string1= hello
        // string2= bye
        // --> string2= hello      
    }
    name2[i]= '\0';
    cout << "String after copying is: " << name2 << endl;
}

void String :: compare(void)
{
    int i;
    for(i=0; name1[i]; i++)
    {
        if(name1[i]!=name2[i])
        {
            cout<<"strings are not equal."<<endl;
            break;
        }   
        else
        {
            cout << "Strings are equal." << endl;
        }        
    }  
}

void String :: concate(void)
{
    int i,k;
    
    while(name1[i] != '\0')
    {
        final[k] = name1[i];
        i++;
        k++;
    }

    i=0;
    while(name2[i] != '\0')
    {
        final[k] = name2[i];
        i++;
        k++;
    }
    final[k] = '\0';

    cout<<"concatenated string : "<< final << endl;
}


int main()
{
    String obj;
    obj.display_string();
    obj.display_length();
    obj.copy();
    obj.compare();
    obj.concate();
    
    return 0;
}