#include <iostream>

using namespace std;

template <class T>T add(T &a, T&b)
{
    T result = a + b;
    
    return result;
}


int main()
{
    double x = 10.10;
    double y = 10.20;
    
    cout << add(x,y) << endl;
    
    return 0;
}
