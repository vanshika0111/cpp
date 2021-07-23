// create a string class that includes all the string related functions 
// functions: length, copy, compare, concatenation, sub string search
// without using in-built string function

#include<iostream>
#include<stdlib.h>
using namespace std;

class String
{
    // length,copy,compare,concate,sub string search
    private:
        char name[30] = "OBJECT ORIENTED PROGRAMMING";
        int length=0;
    public:
        void display_length(void);
};

void String :: display_length(void)
{
    while(name[length] != '0')
    {
        ++length;
        
    } 
    cout << "The length of string is " << length << endl;
}

int main()
{
    String obj;
    obj.display_length();
    return 0;
}