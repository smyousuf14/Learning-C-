#include <iostream>

using namespace std;

class Boy 
{
    private:
        string name;
        int age;
    
    public:
        Boy(string name, int age)
        {
            this -> name = name;
            this -> age = age;
        }
        
        friend void jump(Boy);
};

void jump(Boy b)
{
    if(b.age > 18)
    {
        std::cout << "You are an adult" << std::endl;
    }
}

int main()
{
    Boy b1 = Boy("Bob", 19);
    jump(b1);
}
