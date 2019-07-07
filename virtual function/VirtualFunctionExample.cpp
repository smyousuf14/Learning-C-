#include <iostream>

using namespace std;

class A 
{
    public:
        virtual void display()
        {
            cout << "A" << endl;
        }
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
    B b;
    a = &b;
    a -> display();
    
    return 0;
}

// A virtual function is not used for performing any task. It only serves as a placeholder.
// When the function has no definition, such function is known as "do-nothing" function.
// The "do-nothing" function is known as a pure virtual function. A pure virtual function is a function declared in the base class that has no definition relative to the base class.
// A class containing the pure virtual function cannot be used to declare the objects of its own, such classes are known as abstract base classes.
// The main objective of the base class is to provide the traits to the derived classes and to create the base pointer used for achieving the runtime polymorphism. 
