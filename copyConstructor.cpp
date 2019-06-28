#include <iostream>

using namespace std;

class Cat
{
    public:
    int age;
    
    // Parameterized constructor
    Cat(int a)
    {
        age = a;
    }
    
    Cat(Cat &i)
    {
        age = i.age;
    }
    
    
};


int main()
{
    // Calling the parameterized constructor
    Cat c1(20);
    
    // Calling the copy constructor
    Cat c2(c1);
    
    cout << c1.age << endl;
    cout << c2.age << endl;
    
    return 0;
}
