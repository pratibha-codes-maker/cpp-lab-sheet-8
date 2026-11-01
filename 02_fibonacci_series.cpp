#include <iostream>
using namespace std;

// Function to print Fibonacci series
void fibonacci(int terms)
{
    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= terms; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
}

// Main function
int main()
{
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    fibonacci(terms);

    return 0;
}