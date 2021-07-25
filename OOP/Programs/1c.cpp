// create a string class that includes all the string related functions 
// functions: length, copy, compare, concatenation, sub string search
// without using in-built string function

#include<iostream>
#include<stdlib.h>
using namespace std;

class String
{
    private:
        char name[30] = "hello";
        char name2[30] = "bye";
        int length=0;   // display_length
        char final[30]; // concate
    public:
        void display_length(void);
        // int compare (char a[], char b[]);
        void concate();
};

void String :: display_length(void)
{
    while(name[length] != '\0')
    {
        ++length;   
    } 
    cout << "The length of string is " << length << endl;
}

// int String :: compare(char *name1, char *name2)
// {
//     int flag=0, i=0;
//     while (name1[i] != '\0' && name2[i] != '\0')
//     {
//         if (name1[i] != name2[i])
//         {
//             flag = 1;
//             break;
//         }
//         i++;
//         if(flag == 0)
//         {
//             cout << "Strings are same" << endl;
//             return 0;
//         }
//         else
//         {
//             cout << "Strings aren't same" << endl;
//             return 1;
//         }
//     }
// }

void String :: concate(void)
{
    
    
}


int main()
{
    String obj;
    obj.display_length();
    
    return 0;
}