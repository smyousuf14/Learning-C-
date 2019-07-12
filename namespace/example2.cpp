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


using namespace First;

int main()
{
    sayHello();
    
    return 0;
}
