#include<iostream>
#include<string.h>
using namespace std;

class Details
{
    private:
        string first_name;
        string last_name;
    public:
        void GetDetails(void)
        {
            cout << "Enter first name: ";
            cin >> first_name;
            cout << endl << "Enter last name:";
            cin >> last_name;
            cout << endl;
        }
        void DisplayDetails(void)
        {
            cout << "The name is " << first_name << " " << last_name << endl;
        }
};

int main()
{
    Details obj[1];
    for(int i=0; i<4; i++)
    {
        obj[i].GetDetails();
        obj[i].DisplayDetails();
    }
    

    return 0;
}