#include <iostream>

using namespace std;

class Cal 
{
    private:
        int sum;
    
    public:
        
        Cal()
        {
            sum = 0;
        }
        
        void add(int a, int b)
        {
            sum = a + b;
        }
        
        void add(int a, int b, int c)
        {
            sum = a + b + c;
        }
        
        int getSum()
        {
            return sum;
        }
};

int main()
{
    Cal c1;
    c1.add(5, 6);
    cout << c1.getSum() << endl;
    
    c1.add(1, 6, 9);
    cout << c1.getSum() << endl;
    
    return 0;
    
}
