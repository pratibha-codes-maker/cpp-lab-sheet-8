#include <iostream>
using namespace std;

// Function to check prime number
bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

// Main function
int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a Prime Number.";
    }
    else
    {
        cout << number << " is not a Prime Number.";
    }

    return 0;
}