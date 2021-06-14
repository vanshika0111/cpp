// program to describe the use of global and local variables

#include<iostream>
using namespace std;
int c = 33;
int main()
{
	int a,b,c;
	cout<<"Enter the value of a: "<<endl;
	cin>>a;
	cout<<"Enter the value of b: "<<endl;
	cin>>b;
	c = a-b;
	cout<<"The result is "<<c<<endl;   // this will print the actual result
	cout<<"The global value of c is "<<::c;  //this will print 33 as output
	// "::" is called scope resolution operator
	return 0;
}