// manipulators in c++
// manipulators help in formatting the code for better display 
// three types of manipulators: endl, setw & setprecision
// endl skips to next line included in iostream
// setw() sets the field width; included in iomanip.h
// setprecision is also included in iomanip.h
/* setprecision() has two functions:
   1. set the total number of digits to be displayed 
      when floating numbers are there
      SYNTAX: cout<< setprecision(4) << 123.456
		this will print 123.5
   2. set the number of decimal places to be displayed
      SYNTAX: cout.self(ios::fixed);
              cout<< setprecision(5) << 12.345678;
		this will print 12.34567
*/


// program to illustrate all the manipulators in one program
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a=6, b=12, c=456;
	cout<<"before setw" << endl;
	cout<<"The value of a is "<< a << endl;
	cout<<"The value of b is "<< b << endl;
	cout<<"The value of c is "<< c << endl;
	cout<<"After setw" << endl;
	cout<<"The value of a is "<< setw(4) << a << endl;
	cout<<"The value of b is "<< setw(4) << b << endl;
	cout<<"The value of c is "<< setw(4) << c << endl;
	cout<<"SETPRECISION MANIPULATOR" << endl;
	cout<< setprecision(5) << 123.456 << endl;
	cout.self(ios::fixed) << endl;   // this is an ios flag
        cout<< setprecision(5) << 12.345678 << endl;
	return 0;
}

