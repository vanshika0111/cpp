#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function definations
void getRules();
int getAmountData();
int gameLogic();
// int amountOperations(int totalAmount, int betAmount);

// global variables
string userName;
int totalAmount = 0;
int betAmount = 0;

// main function
int main(void) {
    // call that getRules defined function
    getRules();
    // variable defining
    cout << "\nPlease enter your name : ";
    cin >> userName;
    do {
        if (totalAmount == 0) {
            getAmountData();
            gameLogic();
        }
        else {
            string playAgain;
            // amountOperations(totalAmount,betAmount);
            cout << "\nDO you want to play again ? (y/n) : ";
            cin >> playAgain;
            if (playAgain == "y" || playAgain == "Y") {
                gameLogic();
            }
            else if (playAgain == "n" || playAgain == "N") {
                cout << "Thank you so much for playing this game !\n" << endl;
                break;
            }
            else {
                cout << "Please enter proper characters..." << endl;
                cout << "\nDO you want to play again ? (y/n) : ";
                cin >> playAgain;
            }
        }
    } while (totalAmount != 0);

    return 0;
}

// function for amount data about total howmany $ have user... and it's all about... 
int getAmountData() {
    cout << "\nHowmany $ have you ? : $";
    cin >> totalAmount;
    cout << "You have total " << totalAmount << "$" << endl;
    return 0;
}

// game logic
int gameLogic() {
    int betAmountScope;
    do {
        if (totalAmount < betAmountScope) {
            cout << "Please enter bet amount lessthan than total amount... : $";
            cin >> betAmountScope;
        }
        else {
            cout << "Please enter your bet amount : $";
            cin >> betAmountScope;
        }
    } while (totalAmount < betAmountScope);
    cout << "\nyou bet " << betAmountScope << "$\n" << endl;
    betAmount = betAmountScope;

    // generating random number
    srand(time(0));
    // limit = 1 => 100
    int randomNumber = (rand() % 100) + 1;
    // cout << "Random No is : " << randomNumber << endl;
    int userChoice;
    cout << "\nHey " << userName << "! Guess a number : ";
    cin >> userChoice;
    do {
        if (randomNumber < userChoice) {
            if (userChoice - randomNumber < 10) {
                cout << "good! you are too close please try to guess the correct number...!" << endl;
            }
            betAmount -= 1;
            cout << "Now your bet amount is : $" << betAmount << endl;
            cout << "Please guess lower number...!" << endl;
            cout << "\nguess again : ";
            cin >> userChoice;
        }
        else if (randomNumber > userChoice) {
            if (randomNumber - userChoice < 10) {
                cout << "good! you are too close please try to guess the correct number...!" << endl;
            }
            betAmount -= 1;
            cout << "Now your bet amount is : $" << betAmount << endl;
            cout << "Please guess higher number..!" << endl;
            cout << "\nguess again : ";
            cin >> userChoice;
        }
        if (betAmount <= 1) {
            cout << "Oops! you loss the game...! your bet amount finished (your chances finished...!)" << endl;
            totalAmount -= betAmountScope;
            cout << "Now, Your total balance is : " << totalAmount << "$" << endl;
            break;
        }
    } while (userChoice != randomNumber);
    if (userChoice == randomNumber) {
        cout << "Congratulations...! You won " << userName << " !" << endl;
        totalAmount = betAmount * 20;
        cout << "Now, Your total balance is : " << totalAmount << "$" << endl;
    }
    return 0;
}

// function to show rules to user
void getRules() {
    // about game...
    if (totalAmount == 0) {
        // command to clear terminal...
        system("cls");
    }
    cout << "\n\t= = = = = = = = = = = = = = = = = = = = = = = =\n";
    cout << "\n\t * CASINO NUMBER GUESSING RULES! * \n";
    cout << endl;
    cout << "\t1. Choose a number between 1 to 100\n";
    cout << "\t2. Winner gets 20 times of the money bet\n";
    cout << "\t3. Wrong choice, and you lose 1$ amount you bet\n";
    cout << "\t4. Wrong choice till end the game, you loss bet amount from total amount\n";
    cout << "\t5. You have chances to guess right number till your bet amount\n";
    cout << "\t==> To quit the game anytime, press ctrl+c\n";
    cout << "\n\t= = = = = = = = = = = = = = = = = = = = = = = =\n";
    cout << endl;
}