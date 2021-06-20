#include<iostream>
#include<stdlib.h>
#include <string> 
#include <cstdlib> 
#include <ctime>
using namespace std;

void rules()
{
    cout<< "CASINO GAME RULES" << endl;
    cout << " Choose a number between 1 to 10" << endl;
    cout << " Winner gets 10 times of the bid money" << endl;
    cout << " If lost the chance, you lose the amount you bet" << endl;

}

void rules();
int main()
{
    string PlayerName;
    int balance, bid_amount, guess, correct_guess;
    srand(time(0)); 
    cout << "------LETS GET STARTED WITH CASINO------" << endl;
    cout << "Enter your name: " << endl;
    getline(cin, PlayerName);
    cout<< endl;
    cout << "Enter your balance: Rs. ";
    cin >> balance;
    cout<< endl;


    rules();

    cout<<"Enter amount to bid: Rs. " << endl;
    cin>> bid_amount;
    cout<<endl;
    if(bid_amount > balance)
    {
        cout<<"You can't bid more than your balance. " << endl;
    }
    else
    {
        cout<< "Guess a number between 1 to 10: ";
        cin>>guess;
        cout<< endl;
        if(guess < 0 || guess > 10)
        {
            cout<<"Choose only between 1 to 10";
        }
        else
        {
            correct_guess = rand()%10 + 1;
            if( correct_guess == guess)
            {
                cout<< "Congrats! You won Rs. " << bid_amount*10 << endl;
                balance += bid_amount*10;
            }
            else
            {
                cout<< "Oh dang! You lost Rs. " << bid_amount << endl;
                cout<< "The correct guess was "<< correct_guess<< endl;
                balance -= bid_amount;
            }
            cout<< PlayerName <<", your current balance is Rs. " << balance << endl;
            if (balance == 0)
            {
                cout<< "Your balance is 0. You cannot play with zero balance." << endl;
            }
        }

    }
    
    return 0;
}