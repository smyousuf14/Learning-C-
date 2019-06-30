#include <iostream>

using namespace std;

class Employee
{
    // Instance variables
    private:
        
        int age;
        string name;
        static int count;
        
        
    public:
        
        Employee(int age, string name)
        {
            this ->age = age;
            this ->name = name;
            count++;
        }
    
        void print()
        {
            cout << "Age: " << this ->age << " Name: " << this -> name << endl;
        }
        
        int getCount()
        {
            return count;
        }
      
};


int Employee :: count = 0;

int main()
{
    Employee e1 = Employee(10, "Bob");
    
    cout << e1.getCount() << endl;

    Employee e2 = Employee(35, "Greg");
    Employee e3 = Employee(99, "QAW");
    
    e1.print();
    e2.print();
    e3.print();
    
    
    cout << e1.getCount();
    
}
