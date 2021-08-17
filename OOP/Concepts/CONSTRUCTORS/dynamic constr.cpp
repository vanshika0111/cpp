// dynamic initialization of constructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class BankDeposit
{
    private:
        int principal;
        int years;
        float interestRate;
        float returnValue;
    
    public:
        BankDeposit(){}

        BankDeposit(int p, int y, float r);     // r --> 0.04

        BankDeposit(int p, int y, int r);     // r --> 40%
        // p --> principal
        // y --> years
        // r --> rate of interest

        void display(void);
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;    // percent --> float
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: display(void)
{
    cout << "Principal amount was Rs. " << principal 
         << ". Return value after " << years << " year(s) " 
         << "is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;

    int p,y;
    float r;
    int R;

    cout << "Enter principlay value: Rs. " ;
    cin >> p;
    cout << endl << "Enter number of years: " ;
    cin >> y;
    cout << endl << "Enter rate of interest: Rs. ";
    cin >> r;
    cout << endl;

    bd1=BankDeposit(p,y,r);
    bd1.display();

    cout << "Enter principlay value: Rs. " ;
    cin >> p;
    cout << endl << "Enter number of years: " ;
    cin >> y;
    cout << endl << "Enter rate of interest: Rs. ";
    cin >> r;
    cout << endl;

    bd1=BankDeposit(p,y,r);
    bd2.display();

    bd3.display();
    // this will give garbage values as output
    // as there's a blank constructor which takes zero arguments
    // if the blank constructor is commented out
    // it will throw an error

    /*
    if you do not want this error,
    declare objects as 
    --> BankDeposit bd1 = bankDeposit(p,y,r)
    --> BankDeposit bd2 = bankDeposit(p,y,r)
    instead of 
    --> BankDeposit bd1,bd2,bd3;
    */
   
    // thus, it can be said that
    // object declarations should be equal to the constructors made

    return 0;
}