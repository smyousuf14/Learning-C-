#include <iostream>

using namespace std;

int main()
{
    // Local Variable
    int password;
    
    incorrect:
        cout << "Please enter the password: ";
        cin >> password;
        
        if(password != 2)
        {
            cout << "Incorrect password \n";
            goto incorrect;
        }
        else
        {
            cout << "Correct password \n";
        }
        
}
