#include <iostream>

using namespace std;

template<class X> void fun(X a)
{
    cout << "Value of a is: " << a << endl;
}

template<class X, class Y> void fun(X a, Y b)
{
    cout << "2nd: " << a << " " << b << endl;
}

int main()
{
    fun(10);
    fun(2, 3);
    
    return 0;
}
