// program to illustrate the difference between break and continue statement

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i;
    cout << "The loop with \'break\' produces outpit as: \n";
    for(i=1; i<=10; ++i)
    {
        if((i%3) == 0)
        {
            break;
        }
        else
        {
            cout << i << endl;
        } 
    }

    cout << "The loop with \'conitnue\' produces outpit as: \n";
    for(i=1; i<=10; ++i)
    {
        if ( (i%3) == 0)
        {
            continue;
        }
        else{
            cout << i << endl;
        }
    }

    return 0;
}