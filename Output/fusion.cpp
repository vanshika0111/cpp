// header files declaration
#include<iostream>
#include<stdlib.h>
#include<string> 
#include<cstdlib> 
#include<ctime>
using namespace std;

// global declarations
int balance, bid_amount;
string PlayerName;

// function prototype
void rules();
void intro();
void balance_bid();
void GameTemplate();
void GameLogic();
void step_loss();

// main function
int main()
{
    intro();
    rules();
    balance_bid();
    return 0;
}

void intro()
{
    cout << "------LETS GET STARTED WITH CASINO------" << endl;
    cout << "Enter player's name: " << endl;
    cin>> PlayerName;
    cout<< endl;
}

void rules()
{
    cout<< "=======CASINO GAME RULES=========" << endl;
    cout << " Choose a number between 1 to 10" << endl;
    cout << " Winner gets 10 times of the bid money" << endl;
    cout << " If lost the chance, you lose the amount you bet" << endl;
}

void balance_bid()
{
    char choice;
    cout << "Enter your balance: Rs. ";
    cin >> balance;
    cout<< endl;
    cout<<"Enter amount to bid: Rs. " << endl;
    cin>> bid_amount;
    cout<<endl;
    do
    {
        do
        {
            if (bid_amount > balance)
            {
                cout<<"You can't bid more than your balance. " << endl;
                cout<<"Try playing again!" << endl;
                cout<<"Enter your bid amount again: " << endl;
                cin>>bid_amount;
                cout<< endl;
                //GameTemplate();
            }
        } while(bid_amount > balance);

        do
        {
            if (bid_amount % 10 != 0)
            {
                cout<<"Please enter a multiple of 10 as your bid amount." << endl;
                cout<<"Try bidding again!" << endl;
                cout<<"Enter your bid amount again: " << endl;
                cin>>bid_amount;
                cout<< endl;
                //GameTemplate();
            }
        } while(bid_amount % 10 != 0);

        
    } while ( (bid_amount > balance) || (bid_amount % 10 != 0) );
    GameTemplate();
        // if (bid_amount == balance)
        // {
        //     cout<< "Be careful! you are bidding all of your deposit." << endl;
        //     cout<< "Do you want to continue? Y/N? " << endl;
        //     cin>> choice;
        //     cout<< endl;
        //     if(choice == 'n' || 'N')
        //     {
        //         cout<< "Try bidding agian." << endl;
        //     }
        //     else
        //     {
        //         game();
        //     }
        // }
    
}

void GameTemplate()
{
    cout<< "Hello " << PlayerName << "!" << endl;
    cout<< "Your balance is Rs. " << balance << endl;
    cout<< "Your bidding amount is Rs. " << bid_amount << endl;
    balance -= bid_amount;
    cout<< "Now your balance is Rs. " << balance << endl;
    cout<< "Now let's begin." << endl;
    GameLogic();
}

void GameLogic()
{
    cout << "done" << endl;
}

void step_loss()
{
    
    cout<< "Ooppss! You just lost a penny from your bid amount. " << endl;
    cout<< "Now you have Rs. " << bid_amount << endl;
}

