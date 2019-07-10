#include <iostream>

using namespace std;

class Ball
{
    private:
        int width;
        int height;
    
    public:
        
        Ball(int width, int height)
        {
            this -> width = width;
            this -> height = height;
        }
        
        void print()
        {
            cout << "Width: " << width << " height: " << height << endl;
        }
};

int main()
{
    Ball b = Ball(10, 12);
    b.print();
    
    return 0;
    
}
