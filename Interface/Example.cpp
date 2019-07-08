#include <iostream>

using namespace std;

class Shape
{
    public:
        virtual void draw() = 0;
};

class Rectangle : Shape
{
    public:
        void draw()
        {
            cout << "Rectangle" << endl;
        }
};

class Circle : Shape
{
    public:
        void draw()
        {
            cout << "Circle" << endl;
        }
};

int main()
{
    Rectangle r1;
    Circle c1;
    r1.draw();
    c1.draw();
    
    return 0;
    
}
