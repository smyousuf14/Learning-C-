#include <iostream>

using namespace std;

class Animal
{
    protected:
        int age;
    
    public:
        void walk()
        {
            cout << "walk" << endl;
        }
};

class Dog : public Animal
{
    public:
        void bark()
        {
            cout << "bark" << endl;
        }
};

int main()
{
    Dog bob;
    bob.bark();
    bob.walk();
}
