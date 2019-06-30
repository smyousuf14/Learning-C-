#include <iostream>

using namespace std;

class Employee
{
    // Instance variables
    private:
        
        int age;
        string name;
    
    public:
        
        Employee(int age, string name)
        {
            this ->age = age;
            this ->name = name;
        }
    
        void print()
        {
            cout << "Age: " << this ->age << " Name: " << this -> name << endl;
        }
      
};


int main()
{
    Employee e1 = Employee(10, "Bob");
    Employee e2 = Employee(35, "Greg");
    Employee e3 = Employee(99, "QAW");
    
    e1.print();
    e2.print();
    e3.print();
}
