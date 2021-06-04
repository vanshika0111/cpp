// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Hello"<<endl;  // or write std:: before cout // or use \n in place of endl
//     cout<<"World";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=9;
//     cout<<"The vale uf a is "<<a<<endl;
//     cout<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter value of a: "<<endl;
//     cin>>a;
//     cout<<"Value of a is "<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     float div;
//     cout<<"Enter value of a: "<<endl;
//     cin>>a;
//     cout<<"Enter value of b: "<<endl;
//     cin>>b;
//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of b is "<<b<<endl;
//     // cout<<a+b;
//     // cout<<"The sum of a and b is "<<a+b<<endl;
//     // cout<<"The subtraction of a and b is "<<a-b<<endl;
//     // cout<<"The multiplication of a and b is "<<a*b<<endl;
//     div = a/b;
//     cout<<"The division of a and b is "<<div<<endl;
//     cout<<"The modulus of a and b is "<<a%b<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a = 30;
    int b = 40;
    int max = (a>b)?a:b;
    cout<<"The maximum number is "<<max; 
    return 0;
}