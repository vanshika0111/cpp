// manipulators in c++
// manipulators help in formatting the code for better display 
// two types of manipulators: endl & setw
// endl skips to next line included in iostream
// setw setd the field width; included in iomanip

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
	return 0;
}

