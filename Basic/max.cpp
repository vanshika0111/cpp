// program to find the maximum of three numbers 

#include<iostream>

using namespace std;

int main()
{
    int x,y,z,max;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << endl;

    max = x;
    if (y > max)
    {
        max =y;
    }
    if (z > max)
    {
        max = z;
    }
    
    cout << "The largest of three numbers " << x << ", " << y << " & " << z << " is " << max << endl;

    return 0;
}