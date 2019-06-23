#include <iostream>

using namespace std;

int main()
{
    int test[3][3];  // Declaration of 2D array
    // Initialization
    test[0][0] = 10;
    test[0][1] = 3;
    test[0][2] = 4;
    test[1][0] = 10;
    test[1][1] = 100;
    test[1][2] = 120;
    test[2][0] = 11;
    test[2][1] = 10;
    test[2][2] = 20;
    
    // iterate
    int indexNumber;
    int indexNumber2;
    
    for(indexNumber = 0; indexNumber < 3; indexNumber++)
    {
        for(indexNumber2 = 0; indexNumber2 < 3; indexNumber2++)
        {
            cout << " Number: " << test[indexNumber][indexNumber2];
        }
        
        cout << "\n";
    }
    
    
    
    
}
