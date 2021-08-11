// program to illustrate the concept of constructor

#include<iostream>

using namespace std;
class A{
    public:
    int age;
    string name;
    A(int x, string y)
    {
        age = x;
        name = y;
    }
};

int main()
{
    int age;
    string name;
    A obj(3,"das"), obj2(6,"Sevak");
    cout<<"Age is : " <<obj.age<<endl;
    cout<<"Name is : " <<obj.name<<endl;
    cout<<"Age is : " <<obj2.age<<endl;
    cout<<"Name is : " <<obj2.name<<endl;

    return 0;
}