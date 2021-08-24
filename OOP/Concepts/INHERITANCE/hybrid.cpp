// hybrid inheritance

#include<iostream>
#include<stdlib.h>
using namespace std;

class Student
{
    protected:
        int roll_number;
    public:
        void get_number(int a)
        {
            roll_number = a;
        }
        void put_number(void)
        {
            cout << "Roll number = " << roll_number << endl;
        }
};

class Test : public Student{
    protected:
        float part1, part2;
    public:
        void get_marks(float x, float y)
        {
            part1 = x;
            part2 = y;
        }
        void put_marks(void)
        {
            cout << "displaying marks" << endl
                << "Part 1 = " << part1 << endl
                << "Part 2 = " << part2 << endl;
        }
};

class Sports
{
    protected:
        float score;
    public:
        void get_score(float s)
        {
            score = s;
        }
        void put_score(void)
        {
            cout << "Sports = " << score << endl;
        }
};

class Result : public Test, public Sports
{
    float total;
    public:
        void display(void);
};

void Result :: display(void)
{
    total = part1 + part2 + score;

    put_number();
    put_marks();
    put_score();

    cout << "Total score = " << total << endl;
}

int main()
{
    Result student;

    student.get_number(176);
    student.get_marks(30.5,40.5);
    student.get_score(6.0);
    student.display();

    return 0;
}

