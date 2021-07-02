#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int UserNumber, guess;

    cout << "Hey there!" << endl;
    cout << "Choose a number between from 1 to 10." << endl;
    cin >> UserNumber;
    cout << endl;

    cout << "Now multiply it by 2." << endl;
    guess *= 2;
    cin >> UserNumber;
    
    cout << "Multiply it by 5." << endl;
    guess *= 5;
    cin >> UserNumber;

    cout << "Subtract 5." << endl;
    guess -=5;
    cin >> UserNumber;

    cout << "Lastly, add 7." << endl;
    guess += 7;
    cin >> UserNumber;
    
    cout << "The first digit is the number you chose and the second digit is 2." << endl;

    return 0;
}