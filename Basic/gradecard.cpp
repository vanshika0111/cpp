/*program that takes marks of three subjects and gives the total marks obtained and percentage secured*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    float physics, chemistry, math, total, percent;
    cout<<"Enter marks obtained in physics: ";
    cin>>physics;
    cout<<"Enter marks obtained in chemistry: ";
    cin>>chemistry;
    cout<<"Enter marks obtained in math: ";
    cin>>math;
    total = physics + chemistry + math;
    percent = (total/300)*100;
    cout<<"\n"<<"Total marks obtained is "<<total <<" out of 300 and percentag is "<<percent<<"%";
    return 0;

}