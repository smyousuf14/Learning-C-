#include <iostream>

using namespace std;

class A 
{
    public:
        void shout()
        {
            cout << "A" << endl;
        }
};

class B 
{
    public:
        void shout()
        {
            cout << "B" << endl;
        }
};

class C : public A, public B
{
    public:
        void view()
        {
            B :: shout();
        }
};

int main()
{
    C c1;
    c1.view();
}
