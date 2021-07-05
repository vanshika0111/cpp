#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x,y,z,max;
    cout<< "Enter three numbers: " ;
    cin >> x >> y >> z;
    cout<< endl;
    max = x;
    if(y > max)
    {
        max =y;
    }
    if(z > max)
    {
        max = z;
    }
    cout<< "The maximum of three numbers is " << max << endl;


    return 0;
}