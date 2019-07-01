#include <iostream>

using namespace std;

class Animal
{
    protected:
        int age = 10;
    
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
        
        int get()
        {
            return this -> age;
        }
};

int main()
{
    Dog bob;
    bob.bark();
    bob.walk();
    cout << bob.get() << endl;
}
