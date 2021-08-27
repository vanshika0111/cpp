// open a file using constructor

#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

/*
In this program, inout_file & output_file are the objects of contructors which are initialised.
Thus, cin and cout are replaced by the objects.
*/

int main()
{
    ifstream input_file("data", ios::in);
    char ch;
    input_file >> ch;
    float amt;
    input_file >> amt;

    ofstream output_file ("constructor opening", ios::out);
    int code=2021;
    output_file << code << " hello Vanshika" << endl;

    input_file.close();
    output_file.close();

    return 0;
}