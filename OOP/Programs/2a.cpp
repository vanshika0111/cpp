// write a program to find the largest of three integers using swap function
// function accepts integer arguments by reference

#include<iostream>
#include<stdlib.h>
using namespace std;
void largest(number1, number2, number3);
void swap(&number1, &number2, &number3);
int main()
{
    int number1, number2, number3;
    
    cout << "Enter three numbers: " << endl;
    cin >> number1 >> number2 >> number3 ;
    cout << endl;

    cout << "First number: " << number1 << endl;
    cout << "Second number: " << number2 << endl;
    cout << "Third number: " << number3 << endl;


    largest(number1,number2, number3);
    swap(&number1 ,&number2,  &number3);

    return 0;
}

void largest( int number1,int number2,int number3 )
{
    int max;
    max = number1>number2 ? number1>number3 ? number1:number2>number3 ? number2:number3;
    cout << "the largest number is : "<< max << endl;
}

void swap(int &number1 ,int &number2, int &number3)
{
    int t;
    t = number1;
    number1 = number2;
    number2 = number3;
    number3 = t;
}
