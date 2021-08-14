// virtual base class 

/*
What is virtual Base class?

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Student
{
    protected:
        int roll_num;

    public:
        void set_number(int a)
        {
            roll_num = a;
        }

        void print_number(void)
        {
            cout << "Roll number is " << roll_num << endl;
        }
};

// virtual public or public virtual, both are equivalent
class Test : virtual public Student
{
    protected:
        float math,phy;

    public:
        void set_marks(float m, float p)
        {
            math = m;
            phy = p;
        }

        void print_marks(void)
        {
            cout << "Marks of math are " << math << endl
                << "and of physics are "  << phy << endl;
        }
};

class Sports : public virtual Student
{
    protected:
        float score;
    
    public:
        void set_score(float s)
        {
            score = s;
        }

        void print_score(void)
        {
            cout << "Score of sports is " << score << endl;
        }
};

class Result : public Test, public Sports
{
    private:
        float total;
    
    public:
        void display(void)
        {
            total = math + phy + score;
            print_number();
            print_marks();
            print_score();
            cout << "Total score is " << total << endl;
        }
};

int main()
{
    Result obj;
    obj.set_number(176);
    obj.set_marks(99.5,98.7);
    obj.set_score(97.6);
    obj.display();
    return 0;
}