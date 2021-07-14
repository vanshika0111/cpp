// program to read time in seconds
// and convert in time format (HH:MM:SS) using class

#include<iostream>
#include<stdlib.h>
using namespace std;

class Time
{
    int hour,minute,second;

    public:
    // function prototype
    void Get_time(void);
    void format(void);
    void display();
};

// function to take time in seconds
void Time :: Get_time(void)
{
    cout << "Enter time details:" << endl;
    cout << "Enter time in seconds: ";
    cin >> second;
    cout << endl;
    // void format(void);
}

// function to convert seconds into HH:MM:SS
void Time :: format(void)
{
    hour = second/3600;
    // minute = (hour - 3600)/60;d % 3600
    minute = (second % 3600) / 60;
    // second = minute % 60;
    second = second - (hour*3600) - (minute*60);
    // void display(void);
}
    
// function to display the time format
void Time :: display(void)
{
    cout << "Time in format HH:MM:SS: " << endl;
    cout << hour << ":" << minute << ":" << second << endl;
}

// main function
int main()
{
    // object declaration
    Time T1;

    // function
    T1.Get_time();
    T1.format();
    T1.display();

    return 0;
}    