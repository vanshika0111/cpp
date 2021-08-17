// multi-level inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

// base class
class Student
{
    protected:
        int number;
    public:
        void set_number(int);
        void get_number(void);
};

void Student :: set_number(int r)
{
    number = r;
}

void Student :: get_number(void)
{
    cout << "Roll number is " << number << endl;
}

// first derived class --> single inheritance
class Exam : public Student
{
    protected:
        float math;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}

void Exam :: get_marks(void)
{
    cout << "Marks of math are " << math << endl;
    cout << "Marks of physics are " << physics << endl;
} 

// second derived class --> multi-level inheritance
class Result : public Exam
{
    float percent;
    public:
        void display(void)
        {
            get_number();
            get_marks();
            cout << "Your total percentage is " << (math+physics)/2 << "%" << endl;
        }
};

// main function
int main()
{
    Result one;
    one.set_number(176);
    one.set_marks(90,98);
    one.display();
    return 0;
}