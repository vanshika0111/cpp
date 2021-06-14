// Program to illustrate alternative methods for type casting

#include<iostream>
using namespace std;
int main()
{
	int a = 34;
	float b = 23.44;

	cout<<"The value of a is "<<(float)a;
	cout<<"The value of a is "<<float(a);

	cout<<"The value of a is "<<(int)b;
	cout<<"The value of a is "<<int(b);  
	int c = int(b);
	cout<<"The value of c is "<<c;

	return 0;
}
	