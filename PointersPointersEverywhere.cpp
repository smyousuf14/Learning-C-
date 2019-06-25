#include <iostream>

using namespace std;

int main()
{
    int number = 10;
    int * p;
    p = &number; // Store the adress of number in the pointer p.
    
    cout << "The address of the number variable is " << &number << endl;
    cout << "Address of p variable is: " << p << endl; 
    cout << "Value of the p variable is: " << *p << endl;
}
