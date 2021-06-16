// Program to illustrate alternative methods for type casting

#include<iostream>
using namespace std;
int main()
{
	int a = 34;
	float b = 23.44;

	cout<<"The value of a is "<<(float)a<<endl;
	cout<<"The value of a is "<<float(a)<<endl;

	cout<<"The value of a is "<<(int)b<<endl;
	cout<<"The value of a is "<<int(b)<<endl;  
	int c = int(b);
	cout<<"The value of c is "<<c<<endl;

	cout<<"The expression is "<< a+b<<endl;
	cout<<"The expression is "<< a+int(b)<<endl;
	cout<<:The expression is "<< a+(int)b<<endl; 

	return 0;
}
	