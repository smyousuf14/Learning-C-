#include <iostream>

using namespace std;

class A  
{
    public:
        
        void display()
        {
            cout << "A" << endl;
        }
};

class B: public A 
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

// In the above example, * a is the base class pointer. The pointer can only access the base 
//class members but not the members of the derived class. Although 
//C++ permits the base pointer to point to any object derived from the base class, 
//it cannot directly access the members of the derived class. Therefore, there is a need for
//virtual function which allows the base pointer to access the members of the derived class.
