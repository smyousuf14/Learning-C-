#include <iostream>

using namespace std;

class Student
{
    // Instance Variables
    public:
        int id;
        string name;
};

int main()
{
    Student s1; // Creating an  object of the class Student
    s1.id = 10;
    s1.name = "Yousuf";
    cout << s1.name << endl;
}
