#include <iostream>

using namespace std;

class Student
{
    // Instance Variables
    private:
        int id = 10;
        string name = "Yousuf";
    
    public:
        
        void print()
        {
            cout << "Name: " << name << " id: " << id;
        }
};

int main()
{
    Student s1; // Creating an  object of the class Student
    
    s1.print();
}
