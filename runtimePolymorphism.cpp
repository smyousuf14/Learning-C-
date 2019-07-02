#include <iostream>

using namespace std;

class A 
{
    public:
        int a;
        
        void display()
        {
            cout << "A" << endl;
        }
};


class B : public A
{
    public:
        int b;
        void display()
        {
            cout << "B" << endl;
        }
};


int main()
{
    A a1;
    a1.display();
    
    B b1;
    b1.display();
    
}
