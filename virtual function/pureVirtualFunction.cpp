#include <iostream>

using namespace std;

class A 
{
    public:
        virtual void show() = 0;
};

class B : public A 
{
    public:
        void display()
        {
            cout << "B" << endl;
        }
};

int main()
{
    A *a;
    //B b;
    //a = &b;
    //a -> display();
    
    return 0;
}
// A virtual function can be declared with "     virtual void display() = 0;    ".
// In the above example, A is a pure virtual class, so it is an abstract class and we cannot create objects of that class.
