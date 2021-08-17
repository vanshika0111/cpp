// nesting of member functions

#include <iostream>
#include <stdlib.h>
using namespace std;

class Binary
{
    private:
        string s;

    public:
        void read(void);
        void checkBinary(void);
        void ones_compliment(void);
        void display(void);
};

void Binary :: read(void)
{
    cout << "Enter a binary number: " ;
    cin >> s;
    cout << endl;
}

void Binary :: checkBinary(void)
{
    for (int i=0; i< s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format!" << endl;
            exit(0);
        }
    }
}

void Binary :: ones_compliment(void)
{
    for (int i=0; i< s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) ='1';
        }
        else
        {
            s.at(i) ='0';
        }
    }
}
void Binary :: display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i=0; i< s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    
    b.read();
    b.checkBinary();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}