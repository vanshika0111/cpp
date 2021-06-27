// header files declaration
#include<iostream>
#include<stdlib.h>
#include<string> 
#include<cstdlib> 
#include<ctime>
using namespace std;

// global declarations
int balance, bid_amount;         // balance_bid
int loss;                        // step_loss
int randomNumber, guess;         // Random_Guess
string PlayerName;               // intro function

// function prototype
void rules();
void intro();
void balance_bid();
void GameTemplate();
void GameLogic();
void step_loss();
void Random_Guess();
void thanks();

// main function
int main()
{
    intro();
    rules();
    balance_bid();
    return 0;
}

void intro()
// this function takes player's name
{
    cout << "------LETS GET STARTED WITH CASINO------" << endl;
    cout << "Enter player's name: " << endl;
    cin>> PlayerName;
    cout<< endl;
}

void rules()
// function to declare the rules of the game
{
    cout<< "=======CASINO GAME RULES=========" << endl;
    cout << "\t1. First, you need to enter your balance and then your bidding amount." << endl;
    cout << "\t2. Then you have to guess a number between 1 to 100." << endl;
    cout << "\t3. You will have a total of 10 chances to guess the correct number." << endl;
    cout << "\t4. If you guess the correct number, you win 20 times the bid amount." << endl;
    cout << "\t5. For each wrong guess, you lose (bid amount / 10)Rs per wrong guess of the amount you bet." << endl;
    cout << "\t6. Once you get finished with all your chances, you will lose twice the bid amount from your total balance." << endl;

}

void balance_bid()
// function to let user enter the balance and bid amount
// checks two conditions:
// 1. bid amount < balance
// 2. bid amount is multiple of 10
// then control goes to game template
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
        //     if(choice == 'y' || 'Y')
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
// function to display the current balance and bidding amount
{
    cout<< "Hello " << PlayerName << "!" << endl;
    cout<< "Your balance is Rs. " << balance << endl;
    cout<< "Your bidding amount is Rs. " << bid_amount << endl;
    balance -= bid_amount;
    cout<< "Now your balance is Rs. " << balance << endl;
    cout<< "Now let's begin." << endl;
    cout<< "You will get a maximum of 10 chances to guess the correct number." << endl;

    Random_Guess();
}

void Random_Guess()
// function to generate a random number &
// ask user for first guess
{
    step_loss();

    srand(time(0));   //  random number: [1,100]
    randomNumber = (rand() % 100) + 1;
    //cout<< "Random number generated: " << randomNumber << endl;

    cout<< "Alright! Guess your first number: " ;
    cin>> guess;
    cout<< endl;

    GameLogic();
}

void step_loss()
// function to declare the loss per wrong guesss
{
    loss = bid_amount / 10;
    cout<< "***ALERT!***" << endl;
    cout<< "You will lose Rs. "<< loss << " per wrong guess." <<  endl;
}

void GameLogic()
// function containing the logic of the game
{
    do
    {
        if ( guess < randomNumber)
        {
            bid_amount -= loss;
            cout<< "Oh no! Wrong guess." << endl;
            cout<< "Now you have Rs. " << bid_amount << " left with you." << endl;
            cout<< "Please guess a higher number." << endl;
            cout<< "Guess again: ";
            cin>> guess;
            cout<< endl;
        }

        else if ( guess > randomNumber)
        {
            bid_amount -= loss;
            cout<< "Oh no! Wrong guess." << endl;
            cout<< "Now you have Rs. " << bid_amount << " left with you." << endl;
            cout<< "Please guess a lower number." << endl;
            cout<< "Guess again: ";
            cin>> guess;
            cout<< endl;
        }

        else if (bid_amount <= 1)
        {
            cout<< "Oh dang! You lost all of your bet." << endl;
            balance -= bid_amount;
            cout<< "Your current balance is Rs. " << balance << "." << endl;
            break;
        }
    } while ( guess != randomNumber);

    if (guess == randomNumber)
    {
        cout<< "Wohooo!! You won the game." << endl;
        balance += bid_amount*20;
        cout<< "You have a balance of Rs. " << balance << "." << endl;
    }

    thanks();
}

void thanks()
// function to end the game with a thank you note
{
    cout<< "Thank you " << PlayerName << " for playing with us." << endl;
    cout<< "See you soon :)" << endl;
}

