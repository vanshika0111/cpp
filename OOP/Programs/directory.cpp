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

        void BeforeSort(void)
        {
            cout << first_name << " " << last_name << endl;
        }
};

int main()
{
    int number;
    cout << "Enter the number of names: ";
    cin >> number;
    cout << endl;

    Details obj[number];

    for(int i=0; i<number; i++)
    {
        obj[i].GetDetails();
        obj[i].DisplayDetails();
    }

    cout << "BEFORE SORTING:" << endl;
    for (int i=0; i<number; i++)
    {
        cout << "Person " << i+1 << ": " ;
        obj[i].BeforeSort();
    }
    

    return 0;
}