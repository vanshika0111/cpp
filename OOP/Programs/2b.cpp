// design classes named triangle, square & circle
// make three different function in each class to find area of particular shape

#include<iostream>
#include<stdlib.h>
using namespace std;

class Triangle
{
    private:
        float base, height, area;

    public:
        float get_data_tri(void)
        {
            cout << "Enter base: " ;
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << endl;
        }

        float area_triangle(void)
        {
            cout << "Area of triangle is " << 0.5*base*height << endl;
            // return 0.5*base*height;
        }
};

class Sqaure
{
    private:
        float side, area;

    public:
        float get_data_square(void)
        {
            cout << "Enter side: ";
            cin >> side;
            cout << endl;
        }

        float area_sqaure(void)
        {
            cout << "Area of square is " << side*side << endl;
            // return side*side;
        } 
};

class Circle
{
    private:
        float radius, area;

    public:
        float get_data_cir(void)
        {
            cout << "Enter radius: ";
            cin >> radius;
            cout << endl;
        }

        float area_circle(void)
        {
            cout << "Area of circle is " << 3.14*radius*radius << endl;
            // return 3.14*radius*radius;
        }
};

int main()
{
    Triangle tri;
    Sqaure sq;
    Circle cir;

    tri.get_data_tri();
    tri.area_triangle();

    sq.get_data_square();
    sq.area_sqaure();
    
    cir.get_data_cir();
    cir.area_circle();
    
    return 0;
}