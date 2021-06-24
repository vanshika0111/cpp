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
    if(bid_amount > balance)
    {
        cout<<"You can't bid more than your balance. " << endl;
        cout<<"Try playing again!" << endl;
    }
    else
    {
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
}

void GameTemplate()
{
    cout<< "Hello " << PlayerName << "!" << endl;
    cout<< "Your balance is Rs. " << balance << endl;
    cout<< "Your bidding amount is Rs. " << bid_amount << endl;
    cout<< "Now let's begin." << endl;
    GameLogic();
}

void GameLogic()
{
    int guess, randomNumber;
    srand(time(0));
    randomNumber = (rand() % 100) + 1;
    cout<< "Guess your first number between 1 to 100: " << endl;
    cin >> guess;
    cout<< endl;
    
    if(guess > randomNumber)
    {
        step_loss();
        cout<< "Guess a lower number again: " ;
        cin>> guess;
        cout<< endl;
    }
    else if(guess < randomNumber)
    {
        step_loss();
        cout<< "Guess a higher nnumber again: ";
        cin >> guess;
        cout<< endl;
    }
    else if(bid_amount <= 1)
    {
        cout<< "Your bidding amount vanished, " << PlayerName << "." << endl;
        balance -= bid_amount;
        cout<< "Now your balance is Rs. " << balance << endl;
    }
    else
    {
        cout<< "Congrats " << PlayerName << ", You won!" << endl;
        balance += bid_amount * 20;
        cout<< "You have a total balance of Rs. " << balance << endl;
    }

}

void step_loss()
{
    bid_amount -= 1;
    cout<< "Ooppss! You just lost a penny from your bid amount. " << endl;
    cout<< "Now you have Rs. " << bid_amount << endl;
}

