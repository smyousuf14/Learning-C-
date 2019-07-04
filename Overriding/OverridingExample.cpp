#include <iostream>

using namespace std;

class Animal
{
    private:
        int age;
        string name;
    
    public:
        void run()
        {
            cout << "Run";
        }
};

class Dog: public Animal
{
    private:
        string owner;
    
    public:
        void run()
        {
            cout << "dog run";
        }
};



int main()
{
    Dog d;
    
    d.run();
    
    return 0;
}
