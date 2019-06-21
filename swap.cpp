#include <iostream>

using namespace std;

void swap(int *x, int *y);

int main()
{
    // Local Variable
    int x;
    int y;
    
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "\n Enter the value of y: ";
    cin >> y;
    
    swap(&x,&y);
    cout << "x: "<< x << "  y:" << y;
}

void swap(int *x, int *y)
{
    int temp;
    
    // Swap
    temp = *x;
    *x = *y;
    *y = temp;
    
    
}
