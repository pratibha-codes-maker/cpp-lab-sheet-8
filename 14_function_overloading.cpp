#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Sum of integers: " << c.add(10, 20) << endl;
    cout << "Sum of decimal numbers: " << c.add(5.5, 2.5) << endl;

    return 0;
}
