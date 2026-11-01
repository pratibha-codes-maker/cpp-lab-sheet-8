#include <iostream>
using namespace std;

// Function to swap two numbers
void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before swapping: ";
    cout << num1 << " " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "After swapping: ";
    cout << num1 << " " << num2;

    return 0;
}
