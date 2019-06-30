#include <iostream>

using namespace std;

struct Student
{
    int age;
    string name;
    int id;
};


int main()
{
    Student s1;
    s1.age = 10;
    
    cout << s1.age;
}
