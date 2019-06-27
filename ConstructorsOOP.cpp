#include <iostream>

using namespace std;

class Employee
{
    private:
        string name;
        int age;
        
    public:
        Employee(string n, int a)
        {
            name = n;
            age = a;
        }
    
        void print()
        {
            cout << "Name: " << name << " age: " << age;
        }
}; 

int main()
{
    Employee e1 = Employee("Bob", 99);
    e1.print();
}
