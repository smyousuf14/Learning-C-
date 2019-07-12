#include <iostream>

using namespace std;

namespace First
{
    void sayHello()
    {
        cout << "Hello" << endl;
    }
}

namespace Second 
{
    void sayHello()
    {
        cout << "Hello Second" << endl;
    }
}

int main()
{
    First::sayHello();
    Second::sayHello();
    
    return 0;
}
